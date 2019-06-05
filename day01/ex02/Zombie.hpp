#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
class Zombie {

    private:
    string type;
    string name;

    public:
    void announce();
};

#endif