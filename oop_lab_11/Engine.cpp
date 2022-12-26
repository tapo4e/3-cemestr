#include <iostream>
#include "Engine.h"
int Myspace::Engine::getAmount_of_cylinder() {
    return amount_of_cylinder;
}
int Myspace::Engine::getWear_and_tear() {
    return wear_and_tear;
}
void Myspace::Engine::setAmount_of_cylinder() {
    std::cin>>amount_of_cylinder;
}
void Myspace::Engine::setWear_and_tear() {
    std::cin>>wear_and_tear;
}
bool Myspace::Engine::chekOil() {
    if (!engineOil.getClean())
        return false;
}
void Myspace::Engine::printOil() {
    std::cout<<engineOil.getBrand()<<std::endl;
}
void Myspace::Engine::setEngineoil()  {
    engineOil.setBrand();
}