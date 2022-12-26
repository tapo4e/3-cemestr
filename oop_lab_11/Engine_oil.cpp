#include "Engine_oil.h"
using namespace std;


void Myspace::Engine_oil::setBrand() {
    std::cin>>brand;
}
void Myspace::Engine_oil::setClean() {
    clean+=1;
}
std::string Myspace::Engine_oil::getBrand() {
    return brand;
}
bool Myspace::Engine_oil::getClean() {
    return clean;
}