#ifndef OOP_LAB_11_ENGINE_OIL_H
#define OOP_LAB_11_ENGINE_OIL_H
#include <iostream>
#include <utility>
namespace Myspace {
    class Engine_oil {
    protected:
        std::string brand;
        bool clean;
    public:
        Engine_oil() = default;
        Engine_oil(std::string brand, bool clean) : brand(std::move(brand)), clean(clean) {}
        ~Engine_oil()=default;
        void setBrand();
        void setClean();
        std::string getBrand();
         bool getClean();
    };

}
#endif //OOP_LAB_11_ENGINE_OIL_H
