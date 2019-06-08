/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:38:37 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 11:38:44 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void setZombieType(string type);
		Zombie* newZombie(string name) const;

		void randomChump(void) const;

	private:
		string _type;
		static string _names[5];
};

#endif
