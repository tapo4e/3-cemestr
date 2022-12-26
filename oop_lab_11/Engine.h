#ifndef OOP_LAB_11_ENGINE_H
#define OOP_LAB_11_ENGINE_H

#include "Engine_oil.h"

namespace Myspace {
    class Engine {
    protected :
        int amount_of_cylinder;
        int wear_and_tear;
        Engine_oil engineOil;
    public:
        Engine() = default;

        Engine(int amount_of_cylinder, int wear_and_tear, Engine_oil engineOil) : wear_and_tear(wear_and_tear),
                                                                                  amount_of_cylinder(
                                                                                          amount_of_cylinder),
                                                                                  engineOil(engineOil) {}

        ~Engine() = default;
        void setEngineoil();
        int getAmount_of_cylinder();
        int getWear_and_tear();
        void setAmount_of_cylinder();
        void setWear_and_tear();
        bool chekOil();
        void printOil();
    };
}

#endif //OOP_LAB_11_ENGINE_H
