/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:08:43 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 13:08:48 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPtr = &brain;
	std::string &brainRef = brain;

	std::cout << *brainPtr << std::endl;
	std::cout << brainRef << std::endl;
}
