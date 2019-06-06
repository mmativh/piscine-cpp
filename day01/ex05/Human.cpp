/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:07:35 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 13:07:39 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

Human::Human() : brain("drake", 200){
}

Human::~Human() {
}

std::string Human::identify(void) const {
	return this->brain.identify();
}

const Brain& Human::getBrain(void) const {
	return brain;
}
