/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:32:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 18:13:20 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ClapTrap Z = ClapTrap("Z");
    ScavTrap A = ScavTrap("A");
    ScavTrap B = ScavTrap("B");
    ScavTrap C = ScavTrap("C");
    C = B;
    ClapTrap* D = new ScavTrap("D");
    std::cout << std::endl;

    A.attack(B.getName());
    A.attack(D->getName());
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
    A.guardGate();
    B.guardGate();
    D->takeDamage(10);
    delete D;
    return 0;
}
