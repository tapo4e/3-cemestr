#include <iostream>
#include <utility>
#include "Engine.h"
#include "Wheel.h"
#ifndef OOP_LAB_11_TRANSPORT_H
#define OOP_LAB_11_TRANSPORT_H

  namespace Myspace{
class Transport {
protected:
    std::string brand;
    Engine engine;
    Wheel wheel;

public:
    Transport()=default;
    Transport(std::string brand,Engine engine,Wheel wheel):brand(std::move(brand)),engine(engine), wheel(wheel){}
    ~Transport()=default;
    std::string getBrand();
    void setBrand();
};

}

#endif //OOP_LAB_11_TRANSPORT_H
