#include <iostream>
#include "Wheel.h"

void Myspace::Wheel::setDiameter() {
    std::cin>>diameter;
}
void Myspace::Wheel::setRubber() {
    std::cin>>rubber;
}
int Myspace::Wheel::getDiametr() {
    return diameter;
}
bool Myspace::Wheel::getRubber() {
    return rubber;
}