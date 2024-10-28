/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:22:26 by chon              #+#    #+#             */
/*   Updated: 2024/10/28 17:42:41 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::get_name(void) {
	return name;
}

void	Zombie::announce(void) {
	std::cout << get_name() << ":BraiiiiiiinnnzzzZ...\n";
}
