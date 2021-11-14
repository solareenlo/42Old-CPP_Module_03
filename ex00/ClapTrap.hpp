/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 09:52:37 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 12:38:00 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */
#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>
#include <string>

class ClapTrap {
 public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(ClapTrap const& src);

    ClapTrap& operator=(ClapTrap const& rhs);

    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;

 private:
    std::string name_;
    unsigned int hit_points_;
    static const unsigned int init_hit_points_ = 10;
    static const unsigned int max_hit_points_ = 100;
    unsigned int energy_points_;
    static const unsigned int init_energy_points_ = 10;
    static const unsigned int max_energy_points_ = 100;
    unsigned int attack_damage_;
    static const unsigned int init_attack_damage_ = 0;
};

#endif  // CLAPTRAP_HPP_
