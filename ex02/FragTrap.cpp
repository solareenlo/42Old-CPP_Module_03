/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:31:32 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 17:59:26 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <string>

FragTrap::FragTrap() : ClapTrap("FragTrap") {
    this->setName("FragTrap");
    this->setHitPoints(FragTrap::init_hit_points_);
    this->setMaxHitPoints(FragTrap::init_hit_points_);
    this->setEnergyPoints(FragTrap::init_energy_points_);
    this->setMaxEnergyPoints(FragTrap::init_energy_points_);
    this->setAttackDamage(FragTrap::init_attack_damage_);
    std::cout << "FragTrap " << this->name_ << " has been activated."
              << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->setName(name);
    this->setHitPoints(FragTrap::init_hit_points_);
    this->setMaxHitPoints(FragTrap::init_hit_points_);
    this->setEnergyPoints(FragTrap::init_energy_points_);
    this->setMaxEnergyPoints(FragTrap::init_energy_points_);
    this->setAttackDamage(FragTrap::init_attack_damage_);
    std::cout << "FragTrap " << this->name_ << " has been activated."
              << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->name_ << " disappeared." << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src.getName()) {
    this->setName(src.getName());
    this->setHitPoints(src.getHitPoints());
    this->setMaxHitPoints(src.getMaxHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setMaxEnergyPoints(src.getMaxEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
    std::cout << "FragTrap " << this->name_ << " has been activated."
              << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs) {
    if (this != &rhs) {
        std::cout << "FragTrap " << this->getName() << " has been replaced by "
                  << "FragTrap " << rhs.getName() << "." << std::endl;
        ClapTrap::operator=(rhs);
        this->setName(rhs.getName());
        this->setHitPoints(rhs.getHitPoints());
        this->setMaxHitPoints(rhs.getMaxHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
        this->setAttackDamage(rhs.getAttackDamage());
    }
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->getName() << "> Yeah, give me five!" << std::endl;
}
