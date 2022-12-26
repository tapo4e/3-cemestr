#include "transport.h"
#ifndef OOP_LAB_11_AUTOMOBILE_H
#define OOP_LAB_11_AUTOMOBILE_H

namespace Myspace {
    class Automobile : public Myspace::Transport {
    public:
        Automobile()=default;
        Automobile(std::string brand,Engine engine,Wheel wheel):Transport(std::move(brand),engine, wheel){}
        void print();
    };
}

#endif //OOP_LAB_11_AUTOMOBILE_H
