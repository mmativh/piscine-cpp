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