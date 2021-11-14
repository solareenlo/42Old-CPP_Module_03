/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:12:49 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/15 00:29:46 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("DiamondTrap"),
      FragTrap("DiamondTrap"),
      ScavTrap("DiamondTrap"),
      name_("DiamondTrap") {
    ClapTrap::setName("DiamondTrap_clap_name");
    this->setHitPoints(FragTrap::init_hit_points_);
    this->setEnergyPoints(ScavTrap::init_energy_points_);
    this->setAttackDamage(FragTrap::init_attack_damage_);
    std::cout << "DiamondTrap " << this->name_ << " has been activated."
              << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name), FragTrap(name), ScavTrap(name), name_(name) {
    ClapTrap::setName(name + "_clap_name");
    this->setHitPoints(FragTrap::init_hit_points_);
    this->setEnergyPoints(ScavTrap::init_energy_points_);
    this->setAttackDamage(FragTrap::init_attack_damage_);
    std::cout << "DiamondTrap " << this->getName() << " has been activated."
              << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->name_ << " disappeared." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src)
    : ClapTrap(src.getName()),
      FragTrap(src.getName()),
      ScavTrap(src.getName()),
      name_(src.getName()) {
    this->ClapTrap::setName(src.ClapTrap::getName());
    this->setHitPoints(src.getHitPoints());
    this->setMaxHitPoints(src.getMaxHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setMaxEnergyPoints(src.getMaxEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
    std::cout << "DiamondTrap " << this->name_ << " has been activated."
              << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& rhs) {
    if (this != &rhs) {
        std::cout << "DiamondTrap " << this->getName()
                  << " has been replaced by "
                  << "DiamondTrap " << rhs.getName() << "." << std::endl;
        ClapTrap::operator=(rhs);
        FragTrap::operator=(rhs);
        ScavTrap::operator=(rhs);
        this->setName(rhs.getName());
        this->ClapTrap::setName(rhs.ClapTrap::getName());
        this->setHitPoints(rhs.getHitPoints());
        this->setMaxHitPoints(rhs.getMaxHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
        this->setAttackDamage(rhs.getAttackDamage());
    }
    return *this;
}

std::string DiamondTrap::getName() const { return this->name_; }

void DiamondTrap::attack(std::string const& target) {
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name is " << this->getName() << "." << std::endl;
    std::cout << "ClapTrap name is " << this->ClapTrap::getName() << "."
              << std::endl;
}

void DiamondTrap::setName(std::string name) { this->name_ = name; }
