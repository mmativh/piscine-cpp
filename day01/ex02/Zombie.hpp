/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:37:47 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 11:37:53 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Zombie {
    string _name;
    string _type;

public:
    Zombie(string name, string type);
    ~Zombie();
    void announce() const;
};
#endif
