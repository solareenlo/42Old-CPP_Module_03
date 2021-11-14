/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:32:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 13:02:27 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap A = ClapTrap("A");
    ClapTrap B = ClapTrap("B");

    A.attack(B.getName());
    A.attack("C");
    A.takeDamage(1);
    A.beRepaired(10);
    A.takeDamage(2);
    A.takeDamage(3);
    A.takeDamage(100);
    A.takeDamage(100);
    A.beRepaired(50);
    A.beRepaired(60);
    A.beRepaired(60);
    A.takeDamage(10000);
    return 0;
}
