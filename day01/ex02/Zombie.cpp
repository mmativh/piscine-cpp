/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:37:31 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 11:37:35 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name, string type) : _name(name), _type(type) {
	this->announce();
}

Zombie::~Zombie(void) {
	cout << "<" << this->_name << " (" << this->_type<< ")> zombie dies" << endl;
}

void Zombie::announce(void) const {
	cout << "<" << this->_name << " (" << this->_type<< ")> Braiiiiiiinssss..." << endl;
}
