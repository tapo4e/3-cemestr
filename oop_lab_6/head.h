#include <iostream>
#include <string>
#ifndef OOP_LAB_5_HEAD_H
#define OOP_LAB_5_HEAD_H

class Product{
protected:
    std::string m_prod;
    int count_pr;
public:
    explicit Product(std::string prod,int count):m_prod(prod), count_pr(count){

    }
    Product(){}
   virtual  ~Product()= default;
    virtual int get_counter(){
        return count_pr;
    }
    virtual void  get_parametrs(){
        std::cout<<m_prod<<count_pr<<"\n";
    }
};
class Type1 :   public  Product{
protected:
    std::string m_type1;
    int count_t1;
public:
    Type1(std::string prod,int counter,std::string type1, int count): Product(prod,counter),m_type1(type1), count_t1(count){

    }
    ~Type1()= default;
    virtual int get_counter(){
        return count_t1;
    }
    virtual void  get_parametrs() {
     std::cout<<m_type1<<count_t1<<"\n";
    }
};
class DataOfType1 :public  Type1{
protected:
   std::string name_n;
   int c;
public:
    DataOfType1(std::string prod,int counter,std::string type,int count_1,std::string name,int c_c): Type1(prod,counter,type,count_1),name_n(name),c(c_c){

    }
    ~DataOfType1()= default;
    virtual int get_counter(){
        return c;
    }
    virtual void  get_parametrs(){
        std::cout<<name_n<<c<<"\n";
    }
};
class Type2:  public  Product{
protected:
    std::string m_type2;
    int count_t2;
public:
    Type2(std::string prod2,int counter,std::string type2, int count): Product(prod2,counter), m_type2(type2), count_t2(count){

    }
    ~Type2()= default;
    virtual int get_counter(){
        return count_t2;
    }
    virtual void  get_parametrs() {
        std::cout<<m_type2<<count_t2<<"\n";
    }
};
#endif
