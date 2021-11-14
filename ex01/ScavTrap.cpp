/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:33:27 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 16:07:07 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap("ScavTrap") {
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << this->name_ << " has been activated."
              << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name) {
    this->setHitPoints(100);
    this->setMaxHitPoints(100);
    this->setEnergyPoints(50);
    this->setMaxEnergyPoints(50);
    this->setAttackDamage(20);
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
