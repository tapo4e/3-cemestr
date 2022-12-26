#ifndef OOP_LAB_11_WHEEL_H
#define OOP_LAB_11_WHEEL_H

namespace  Myspace {
    class Wheel {
    protected:
        int diameter;
        bool rubber;
    public:
        Wheel()=default;
        Wheel(int diametr, bool rubber):diameter(diametr), rubber(rubber){
        }
        ~Wheel()=default;
        void setDiameter();
        void setRubber();
        int getDiametr();
        bool getRubber();
    };
}

#endif //OOP_LAB_11_WHEEL_H
