/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmathivh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:36:03 by mmathivh          #+#    #+#             */
/*   Updated: 2019/06/06 11:36:06 by mmathivh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
class Pony {

    private:
    string _eye_color;

    public:
    Pony(string eye_color);
    ~Pony();
};

void ponyOnTheStack();
void ponyOnTheHeap();
#endif
