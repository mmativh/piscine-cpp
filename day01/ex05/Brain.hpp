/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:04:27 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 13:04:30 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain {
	private:
		std::string name;
		int num;
	public:
		Brain(std::string name, int num);
		~Brain();
		std::string identify(void) const;
};

#endif
