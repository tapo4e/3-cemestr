#ifndef OOP_LAB_3_HEAD_H
#define OOP_LAB_3_HEAD_H

#include <iostream>

class Massive{
private:
 int *mass;
 static int n;
public:
    Massive(){
        mass= new int[n];
    }

    ~Massive(){
        delete[]mass;
    }

    ///доступ к индексу
    int& operator[](const int i){
        return mass[i]; 
    }
    ///ввод
    friend std::istream& operator>>(std::istream &in, Massive &point){
        for(int i=0;i<Massive::n;i++){
            in>>point.mass[i];
        }
        return in;
    }
    ///вывод
    friend std::ostream& operator<<(std::ostream &out,const Massive &point){
        for (int i=0;i<Massive::n;i++) {
            out << point.mass[i]<<" ";
        }
        return out;
    }
    ///копирование массива
    Massive &operator=(const Massive &c){
        for(int i=0;i<Massive::n;i++) {
            mass[i]=c.mass[i];
        }
        return *this;
    }
    ///вывод положительных значений
    Massive operator++(){
        for(int i=0; i<Massive::n; i++ ) {
            if(mass[i]<=0) {
                mass[i]++;
            }
        }
        return *this;
    }
    /// сложение двух массивов
        friend Massive operator+( const Massive &c1,const Massive &c2){
        Massive b;
        b.mass=new int[Massive::n];
        b.mass[Massive::n]=0;
        for(int i=0;i<Massive::n;i++) {
             b.mass[i] = c1.mass[i]+c2.mass[i];
            }
        return b;
        }
        ///оператор нахождения большего чилса ;
        friend bool operator>(const Massive &c1, const Massive &c2) {
        int max=c1.mass[0];
        int max1=c2.mass[0];
            int j=0;
        for(int i=0;i<Massive::n;i++) {
            if (c1.mass[i]>max){
                j=i;
            }
        }
            int k=0;
            for (int i = 0; i < Massive::n; i++) {

                if(c2.mass[i]>max1){
                    k=i;
                }
            }
            return c1.mass[j]>c2.mass[k];
        }
        ///сравнение
         friend bool operator==(const Massive &c1, const Massive &c2){

        int k=0;

             for (int i = 0; i < Massive::n; i++) {
                 if(c1.mass[i]==c2.mass[i]){
                     k++;
             }
        }
                 return k==5 ;

    }
    /// оператор обнуления массива
    Massive& operator--(){
        for(int i=0; i<Massive::n; i++ ) {
            while(mass[i]!=0) {
                --mass[i];
            }
        }
        return *this;
    }
    ///Массив сложения одного элемента
    friend Massive& operator+( Massive &c1,int value){
        int poz=0;
        std::cin>>poz;
        c1.mass[poz-1]=c1.mass[poz-1]+value;
        return c1;
    }


};
int Massive::n=5;
#endif
