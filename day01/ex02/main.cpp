/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:38:52 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 11:38:55 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zEvent;

	zEvent.setZombieType("slow");
	Zombie *zombie = zEvent.newZombie("nicky");
	Zombie *zombie2 = zEvent.newZombie("wayne");

	zEvent.setZombieType("speedies");
	for (int i = 0; i < 5; i++)
		zEvent.randomChump();

	delete zombie;
	delete zombie2;
}
