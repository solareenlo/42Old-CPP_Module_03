/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:32:16 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/14 16:53:02 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    ClapTrap Z = ClapTrap("Z");
    FragTrap A = FragTrap("A");
    FragTrap B = FragTrap("B");
    FragTrap C = FragTrap("C");
    C = B;
    std::cout << std::endl;

    A.attack(B.getName());
    A.attack(B.getName());
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
    std::cout << std::endl;
    return 0;
}
