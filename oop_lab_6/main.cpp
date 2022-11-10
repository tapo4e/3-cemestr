#include "head.h"
#define n 4
int main() {
    Product **product= new Product*[n];
    Product product1("fruit",10);
    Type1 type1("fruit",10,"apple",9);
    DataOfType1 data("fruit",10,"apple",9,"red",5);
    Type2 type2("fruit",10,"banana",1);
    product[0]=&product1;
    product[1]=&type1;
    product[2]=&data;
    product[3]=&type2;
    for(int i=0;i<n;i++) {
   std::cout<<product[i]->get_counter()<<"\n";
    product[i]->get_parametrs();
    }

    return 0;
}
