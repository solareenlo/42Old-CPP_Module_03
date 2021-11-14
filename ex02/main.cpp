/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:32:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 18:08:38 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    ClapTrap Z = ClapTrap("Z");
    FragTrap A = FragTrap("A");
    FragTrap B = FragTrap("B");
    ClapTrap* C = new FragTrap("C");
    std::cout << std::endl;

    A.attack(B.getName());
    A.attack(C->getName());
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
    A.highFivesGuys();
    B.highFivesGuys();
    C->takeDamage(10);
    std::cout << std::endl;
    delete C;

    return 0;
}
