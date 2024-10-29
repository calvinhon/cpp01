/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:22:26 by chon              #+#    #+#             */
/*   Updated: 2024/10/29 18:08:26 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
};

Zombie::~Zombie() {
	std::cout << _name << " zombie destroyed\n";
};
