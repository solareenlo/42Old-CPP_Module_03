/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:31:35 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/15 00:15:24 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
 public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(ScavTrap const& src);
    ScavTrap& operator=(ScavTrap const& rhs);

    void attack(std::string const& target);
    void guardGate();

 protected:
    static const unsigned int init_hit_points_ = 100;
    static const unsigned int init_energy_points_ = 50;
    static const unsigned int init_attack_damage_ = 20;
};
#endif  // SCAVTRAP_HPP_
