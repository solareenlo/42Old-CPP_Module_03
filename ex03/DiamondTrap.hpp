/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:05:36 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/15 00:23:49 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */
#ifndef DIAMONDTRAP_HPP_
#define DIAMONDTRAP_HPP_

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
 public:
    DiamondTrap();
    DiamondTrap(std::string name);
    virtual ~DiamondTrap();
    DiamondTrap(DiamondTrap const& src);

    DiamondTrap& operator=(DiamondTrap const& rhs);

    std::string getName() const;

    void attack(std::string const& target);
    void whoAmI();

 private:
    std::string name_;

    void setName(std::string name);
};
#endif  // DIAMONDTRAP_HPP_
