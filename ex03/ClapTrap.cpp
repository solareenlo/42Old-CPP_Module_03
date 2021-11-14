/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:03:51 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 23:41:57 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name_("Claptrap"),
      hit_points_(ClapTrap::init_hit_points_),
      max_hit_points_(ClapTrap::init_hit_points_),
      energy_points_(ClapTrap::init_energy_points_),
      max_energy_points_(ClapTrap::init_energy_points_),
      attack_damage_(ClapTrap::init_attack_damage_) {
    std::cout << "ClapTrap " << this->name_ << " has been activated."
              << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name_(name),
      hit_points_(ClapTrap::init_hit_points_),
      max_hit_points_(ClapTrap::init_hit_points_),
      energy_points_(ClapTrap::init_energy_points_),
      max_energy_points_(ClapTrap::init_energy_points_),
      attack_damage_(ClapTrap::init_attack_damage_) {
    std::cout << "ClapTrap " << this->name_ << " has been activated."
              << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name_ << " disappeared." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
    this->setName(src.getName());
    this->setHitPoints(src.getHitPoints());
    this->setMaxHitPoints(src.getMaxHitPoints());
    this->setEnergyPoints(src.getEnergyPoints());
    this->setMaxEnergyPoints(src.getMaxEnergyPoints());
    this->setAttackDamage(src.getAttackDamage());
    std::cout << "ClapTrap " << this->name_ << " has been activated."
              << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs) {
    if (this != &rhs) {
        std::cout << "ClapTrap " << this->getName() << " has been replaced by "
                  << "ClapTrap " << rhs.getName() << "." << std::endl;
        this->setName(rhs.getName());
        this->setHitPoints(rhs.getHitPoints());
        this->setMaxHitPoints(rhs.getMaxHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
        this->setAttackDamage(rhs.getAttackDamage());
    }
    return (*this);
}

void ClapTrap::attack(std::string const& target) {
    std::cout << "ClapTrap " << this->name_ << " attack " << target
              << ", causing " << this->attack_damage_ << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hit_points_ >= amount) {
        std::cout << this->name_ << " took " << amount << " damage.";
        this->hit_points_ -= amount;
    } else {
        std::cout << this->name_ << " took " << this->hit_points_ << " damage.";
        this->hit_points_ = 0;
    }
    std::cout << " " << this->name_ << "'s hit point is " << this->hit_points_
              << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hit_points_ >= ClapTrap::max_hit_points_) {
        amount = 0;
    } else if (this->hit_points_ + amount >= ClapTrap::max_hit_points_) {
        amount = ClapTrap::max_hit_points_ - this->hit_points_;
    }
    this->hit_points_ += amount;
    std::cout << this->name_ << " is repaired by " << amount << " points.";
    std::cout << " " << this->name_ << "'s hit point is " << this->hit_points_
              << "." << std::endl;
}

std::string ClapTrap::getName() const { return this->name_; }
unsigned int ClapTrap::getHitPoints() const { return this->hit_points_; }
unsigned int ClapTrap::getMaxHitPoints() const { return this->max_hit_points_; }
unsigned int ClapTrap::getEnergyPoints() const { return this->energy_points_; }
unsigned int ClapTrap::getMaxEnergyPoints() const {
    return this->max_energy_points_;
}
unsigned int ClapTrap::getAttackDamage() const { return this->attack_damage_; }

void ClapTrap::setName(std::string name) { this->name_ = name; }

void ClapTrap::setHitPoints(unsigned int hit_points) {
    this->hit_points_ = hit_points;
}

void ClapTrap::setMaxHitPoints(unsigned int max_hit_points) {
    this->max_hit_points_ = max_hit_points;
}

void ClapTrap::setEnergyPoints(unsigned int energy_points) {
    this->energy_points_ = energy_points;
}

void ClapTrap::setMaxEnergyPoints(unsigned int max_energy_points) {
    this->max_energy_points_ = max_energy_points;
}

void ClapTrap::setAttackDamage(unsigned int attack_damage) {
    this->attack_damage_ = attack_damage;
}
