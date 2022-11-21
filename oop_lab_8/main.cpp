#include <iostream>
#include "head.h"
void terminate_(){
    std::cout<<"No catch";
    abort();
}
void unexpected_(){
    printf("unknown");
    abort();
}

int main() {
    std::set_unexpected(unexpected_);
    std::set_terminate(terminate_);
    Error error;

    Set <double> set(6);
    Set <double> newmass(4);

   for (int i=0;i<5;i++){
       std::cout<<Set<double>::getItem(i)<<std::endl;
   }
    error.error(reinterpret_cast<const char *>(getchar()));

    rewind(stdin);
        int s=0;
        try {
            while (s == 0) {
                std::cout << "\n1 push element    2-chek unsigned array  3-delete element   4   search element";
                rewind(stdin);
                switch (getchar()) {
                    case '1' : {
                        set.pushBack(set.getSize());
                        set.getMass1();
                        break;
                    }
                    case '2' : {
                        try {
                            for (int i = 0; i < 5; i++) {
                                if (Set<double>::getItem(i) < 0)

                                    throw i;
                            }
                        }
                        catch (int a) {
                            std::cout << "Error:" << a << "\n";
                            newmass.pop_back(newmass.getSize(), a);
                            newmass.getMass1();
                        }
                        break;

                    }

                    case '3' : {
                        std::cout << "Whic element of mass you wont delete?" << std::endl;
                        for (int i = 0; i < 5; i++) {

                            std::cout << i << " - " << Set<double>::getItem(i) << "\n";
                        }
                        int value = 0;
                        std::cin >> value;
                        newmass.pop_back(newmass.getSize(), value);
                        newmass.getMass1();
                        break;
                    }
                    case '4': {
                        int l;
                        std::cin >> l;
                        if(l<0) {
                        }
                        rewind(stdin);
                        try {
                            if (newmass.search(l) == -1) {
                                throw "No element";
                            }
                            std::cout << newmass.search(l);

                        }
                        catch (const char *exception) {
                            std::cerr << "Error " << exception << "\n";
                        }
                        break;
                    }
                    case '0' :
                        s = 1;
                        break;

                }
            }
        }
    catch(...){
        std::unexpected();
    }
    return 0;
}
