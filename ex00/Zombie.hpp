/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chon <chon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:22:32 by chon              #+#    #+#             */
/*   Updated: 2024/10/29 18:08:29 by chon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
	
public:
	Zombie(std::string name);
	~Zombie();

private:
	std::string _name;
	
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif