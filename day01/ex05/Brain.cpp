/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:04:03 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 13:04:07 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#include <iostream>
#include <sstream>

Brain::Brain(std::string name, int num)
{
	this->name = name;
	this->num = num;
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	std::stringstream buffer;
	buffer << this;
	return buffer.str();
}
