#include "Pony.hpp"

Pony::Pony(string eye_color) : _eye_color(eye_color)
{
    cout << "pony eye color: " << this->_eye_color << " is created" << endl;
}
Pony::~Pony() {
    cout << "pony eye color: " << this->_eye_color << " died" << endl;
}

void ponyOnTheHeap() {
    Pony* ron = new Pony("brown");
    delete ron;
}

void ponyOnTheStack() {
    Pony richard =  Pony("yellow");
}