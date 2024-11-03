/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:22:33 by chon              #+#    #+#             */
/*   Updated: 2024/11/03 12:39:34 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
    std::cout << "============= Zombies on the Heap =============" << std::endl;
    Zombie	*z1 = newZombie("Charles");
    z1->announce();
	delete z1;
    Zombie	*z2 = newZombie("Charlotte");
	z2->announce();
    delete z2;

    std::cout << "============= Zombies on the Stack =============" << std::endl;
	randomChump("Rando");
    randomChump("Total Rando");

    return 0;
}