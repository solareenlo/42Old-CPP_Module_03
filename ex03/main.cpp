/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:32:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/15 00:37:37 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    std::cout << "[ Constructor ]" << std::endl;
    DiamondTrap D = DiamondTrap("D");
    FragTrap* F = new DiamondTrap("F");
    ScavTrap* S = new DiamondTrap("S");
    ClapTrap* C = new DiamondTrap("C");
    DiamondTrap D1(D);
    DiamondTrap D2 = DiamondTrap("D2");
    std::cout << std::endl;

    std::cout << "[ Attack ]" << std::endl;
    D.attack("A");
    D.ClapTrap::attack("A");
    F->attack("A");
    F->ClapTrap::attack("A");
    S->attack("A");
    C->attack("A");
    std::cout << std::endl;

    std::cout << "[ HitPoints EnergyPoints AttackDamage ]" << std::endl;
    std::cout << D.getName() << " " << D.getHitPoints() << " "
              << D.getEnergyPoints() << " " << D.getAttackDamage() << std::endl;
    std::cout << D.ClapTrap::getName() << " " << D.ClapTrap::getHitPoints()
              << " " << D.ClapTrap::getEnergyPoints() << " "
              << D.ClapTrap::getAttackDamage() << std::endl;
    std::cout << D.getName() << " " << D.FragTrap::getHitPoints() << " "
              << D.FragTrap::getEnergyPoints() << " "
              << D.FragTrap::getAttackDamage() << std::endl;
    std::cout << D.getName() << " " << D.ScavTrap::getHitPoints() << " "
              << D.ScavTrap::getEnergyPoints() << " "
              << D.ScavTrap::getAttackDamage() << std::endl;
    std::cout << std::endl;

    std::cout << "[ Who am I ]" << std::endl;
    D.whoAmI();
    D1.whoAmI();
    std::cout << std::endl;

    D2.whoAmI();
    D2 = D;
    D2.whoAmI();
    std::cout << std::endl;

    std::cout << "[ Destructor ]" << std::endl;
    delete (F);
    delete (S);
    delete (C);
    return 0;
}
