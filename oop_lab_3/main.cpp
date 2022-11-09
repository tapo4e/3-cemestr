#include "head.h"

int main() {

    Massive r1,r2,r3;
    std::cout << "1mass";
    std::cin >> r1;
    std::cout << "2mass";
    std::cin >> r2;
      ck:  if (r1 == r2) {
int k = 0;
///цикл для проверки двух массивов,чтобы они не были идентичными, для их последующего сравнения
std::cout << "1-change 1mass, 2-change 2mass, end program" << "\n";
std::cin >> k;
switch (k) {
    case 1:
        int i_r;
        int l_r;
        std::cout << "index object mass,which you wont change" << "\n";
        std::cin >> i_r;
        std::cout << "new object" << "\n";
        std::cin >> l_r;
        r1[i_r-1] = l_r;
        break;
    case 2:
        int i;
        int l;
        std::cout << "index object mass,which you wont change" << "\n";
        std::cin >> i;
        std::cout << "new object" << "\n";
        std::cin >> l;
        r2[i-1] = l;
        break;
    default:
        std::cout<<"wrong input\n";
        goto ck;
}
}
        std::cout<<r1<<"\n";
    std::cout<<r2<<"\n";
        int k=0;
    s:while(k!=10) {
        k++;
        std::cout << "choose next operation:\n"
                  << "1-sum of 2 mass, 2- make mass[0],\n 3-make every mass unsig, 4-sum one of elment mass,\n5-bigger elemet of mass, 6-coppy 1mass,7end program and show mass1 and mass2\n";
        int poz;
        int m = 0;
        std::cin >> poz;
        switch (poz) {
            case 1:
                std::cout << r1 + r2 << "\n";
                break;
            case 2:
                std::cout << "1-mass1 2-mass2";
                std::cin >> m;
                if (m == 1) {
                    std::cout << --r1 << "\n";
                } else if (m == 2) {
                    std::cout << --r2 << "\n";
                }
                break;
            case 3:
                std::cout << "1-mass1 2-mass2";
                std::cin>>m;
                if(m==1) {
                    std::cout << ++r1 << "\n";
                }
                else if(m==2) {
                      std::cout<< ++r2<<"\n";
                }
                break;
            case 4:
                std::cout << "1-mass1 2-mass2\n";
                std::cin >> m;
                if (m== 1) {
                    std::cout<<"mass1 + ";
                    std::cin >> m;
                    std::cout<<"index of mass:\n";
                    std::cout << r1 + m<< "\n";
                    break;
                } else if (m == 2) {
                    std::cout<<"mass2 + ";
                    std::cin >> m;
                    std::cout<<"index of mass:";
                    std::cout << r2 + m << "\n";
                    break;
                }
            case 5:
                if (r1 > r2) {
                    std::cout << "number of first mass>number of second" << "\n";
                } else {
                    std::cout << "number of first mass<number of second" << "\n";
                }
                break;
            case 6:
                r3=r1;
            std::cout<<r3;
            break;
            case 7:
                std::cout<<r1<<"\n";
                std::cout<<r2<<"\n";
                goto ret;
            default:
                std::cout<<"wrong input\n";
            goto s;
        }
    }

ret:return 0;

}