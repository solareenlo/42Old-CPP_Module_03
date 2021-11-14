/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:28:42 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/15 00:14:53 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
 public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const& src);

    FragTrap& operator=(FragTrap const& rhs);

    void highFivesGuys(void);

 protected:
    static const unsigned int init_hit_points_ = 100;
    static const unsigned int init_energy_points_ = 100;
    static const unsigned int init_attack_damage_ = 30;
};
#endif  // FRAGTRAP_HPP_
