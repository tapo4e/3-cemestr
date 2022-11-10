#include <iostream>
#include <string>
#ifndef OOP_LAB_5_HEAD_H
#define OOP_LAB_5_HEAD_H

class Product{
protected:
    std::string m_prod;
public:
    explicit Product(std::string prod):m_prod(prod){

    }
    ~Product()= default;

};
class Type1 :  virtual public  Product{
protected:
    std::string m_type1;
public:
    Type1(std::string prod,std::string type1): Product(prod),m_type1(type1){

    }
    ~Type1()= default;
    void GetType1(){
     std::cout<<m_type1;
    }
};
class DataOfType1 :public  Type1{
protected:
    int counter1;
    int price1;
public:
    DataOfType1(std::string prod,std::string type,int counter,int price): Type1(prod,type),Product(prod),counter1(counter),price1(price){

    }
    ~DataOfType1()= default;
    friend std::ostream& operator<<(std::ostream& out,const DataOfType1 &c){
        out<<c.counter1<<"  "<<c.price1<<"\n";
        return out;
    }
};
class Type2: virtual public  Product{
protected:
    std::string m_type2;
public:
    Type2(std::string prod2,std::string type2): Product(prod2), m_type2(type2){

    }
    ~Type2()= default;
    friend std::ostream& operator<<(std::ostream& out,const Type2 &c){
        out<<c.m_type2<<"\n";
        return out;
    }
};

class DataOfType2 : public  Type2{
protected:
    int counter2;
    int price2;
public:
    DataOfType2(std::string prod,std::string type,int counter,int price): Type2(prod,type), Product(prod), counter2(counter),price2(price){

    }
    ~DataOfType2()= default;
    friend std::ostream& operator<<(std::ostream&
    out,const DataOfType2 &c){
        out<<c.counter2<<"  "<<c.price2<<"\n";
        return out;
    }
};

class All: public  DataOfType1, public  DataOfType2{
public:
    All(std::string prod, std::string type, int counter, int price, std::string prod1,
        std::string type1, int counter1, int price1) :
        DataOfType1( prod,type, counter, price), DataOfType2( prod1,type1, counter1, price1), Product(prod) {

    }
    ~All()= default;

    void GetAll(){
        std::cout<<m_prod<<m_type1<<counter1<<" "<<price1<<"\n"<<m_type2<<counter2<<" "<<price2;
    }
};


#endif
