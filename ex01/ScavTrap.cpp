/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:33:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 16:59:33 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <string>

ScavTrap::ScavTrap() : ClapTrap::ClapTrap("ScavTrap") {
    this->setHitPoints(ScavTrap::init_hit_points_);
    this->setMaxHitPoints(ScavTrap::init_hit_points_);
    this->setEnergyPoints(ScavTrap::init_energy_points_);
    this->setMaxEnergyPoints(ScavTrap::init_energy_points_);
    this->setAttackDamage(ScavTrap::init_attack_damage_);
    std::cout << "ScavTrap " << this->name_ << " has been activated."
              << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name) {
    this->setHitPoints(ScavTrap::init_hit_points_);
    this->setMaxHitPoints(ScavTrap::init_hit_points_);
    this->setEnergyPoints(ScavTrap::init_energy_points_);
    this->setMaxEnergyPoints(ScavTrap::init_energy_points_);
    this->setAttackDamage(ScavTrap::init_attack_damage_);
    std::cout << "ScavTrap " << this->name_ << " has been activated."
              << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name_ << " disappeared." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src.getName()) {
    this->setHitPoints(src.getHitPoints());
    this->setMaxHitPoints(src.getMaxHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setMaxEnergyPoints(src.getMaxEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
    std::cout << "ScavTrap " << this->name_ << " has been activated."
              << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs) {
    if (this != &rhs) {
        std::cout << "ScavTrap " << this->getName() << " has been replaced by "
                  << "ScavTrap " << rhs.getName() << "." << std::endl;
        this->setName(rhs.getName());
        this->setHitPoints(rhs.getHitPoints());
        this->setMaxHitPoints(rhs.getMaxHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
        this->setAttackDamage(rhs.getAttackDamage());
    }
    return (*this);
}

void ScavTrap::guardGate() {
    if (this->getHitPoints() > 0) {
        std::cout << "ScavTrap " << this->getName()
                  << " have enterred in Gate keeper mode." << std::endl;
    } else {
        std::cout << "ScavTrap " << this->getName() << "'s hit point is "
                  << this->getHitPoints() << "." << std::endl;
    }
}
