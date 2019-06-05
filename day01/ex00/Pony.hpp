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