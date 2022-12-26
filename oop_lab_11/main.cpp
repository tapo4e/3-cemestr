#include <iostream>
#include "Automobile.h"
#include "transport.h"
int main() {
    std::string brand;
    Myspace::Wheel wheel(0,false);
    Myspace::Engine_oil engineOil("x",false);
    Myspace::Engine engine(0,0,engineOil);

    std::cout<<"Brand of automobile"<<std::endl;
    std::cin>>brand;
    std::cout<<"Type of engine(v12)";
    engine.setAmount_of_cylinder();
    std::cout<<"Oil brand"<<std::endl;
    engine.setEngineoil();
    std::cout<<"Diameter of wheel"<<std::endl;
    wheel.setDiameter();
    std::cout<<"Type of rubber (Winter-1,summer-0)"<<std::endl;
    wheel.setRubber();
    Myspace::Automobile automobile(brand,engine,wheel);
    automobile.print();

}
