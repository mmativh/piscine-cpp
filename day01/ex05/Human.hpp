/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:07:21 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 13:07:26 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"
#include <string>

class Human {
	private:
		const Brain brain;
	public:
		Human();
		~Human();
		std::string identify(void) const;
		const Brain &getBrain(void) const;
};

#endif
