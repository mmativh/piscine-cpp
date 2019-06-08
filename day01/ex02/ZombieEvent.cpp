/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:38:18 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 11:38:22 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {};
ZombieEvent::~ZombieEvent(void) {};

std::string ZombieEvent::_names[5] = {"Ross", "Wale", "trey","Ron","Dan"};

void ZombieEvent::setZombieType(string type) {
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(string name) const {
	return new Zombie(name, this->_type);
}

void	ZombieEvent::randomChump(void) const {
	Zombie z = Zombie(ZombieEvent::_names[rand() % 5], this->_type);
}
