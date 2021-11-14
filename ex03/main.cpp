/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:32:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 19:35:36 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap D = DiamondTrap("D");
    FragTrap* F = new DiamondTrap("F");
    ScavTrap* S = new DiamondTrap("S");
    ClapTrap* C = new DiamondTrap("C");
    std::cout << std::endl;

    D.attack(F->getName());
    F->takeDamage(10);
    S->takeDamage(5);
    C->takeDamage(3);

    std::cout << std::endl;
    delete (F);
    delete (S);
    delete (C);
    return 0;
}
