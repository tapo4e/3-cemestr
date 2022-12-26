#include "Automobile.h"
void Myspace::Automobile::print() {
    std::cout<<"Brand:"<<getBrand()<<std::endl;
    std::cout<<"About engine:"<<std::endl;
    std::cout << "Amount of cylinder: v" << engine.getAmount_of_cylinder()<<" Wear and tear "<<engine.getWear_and_tear()<<"%"<<std::endl;
    if(!engine.chekOil())
        std::cout<<"Change oil!"<<std::endl;
    std::cout<<"Oil Brand";
    engine.printOil();
    std::cout<<"Wheel diameter: ";
    std::cout<<wheel.getDiametr()<<std::endl;
    if(wheel.getRubber())
        std::cout<<"Winter rubber"<<std::endl;
    else{
        std::cout<<"summe rubber"<<std::endl;
    }

}