#include "header.h"
void get_info(Task &task, Task *mass,int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "id=" << Task::get_id()-n<< "\nname is " << mass[i].name << "\nprocent of work="<< mass[i].procent_of_work << "\n";
    }
}
int main() {
    int n;
    unsigned char m;
    Task of;
    Task in;
    TryAgainSize:
    std::cout<<"Please, write a size of your massive\n";
    std::cin>>m;
    if(static_cast<int>(m)>64 || static_cast<int>(m)==45){
        std::cout << "wrong input, try again\n";
        rewind(stdin);
        goto TryAgainSize;
    }
    n=static_cast<int>(m)-48;
    std::string name;
    Chek ir;
      Task *task=new Task[n];
            for (int i=0; i < n; i++)
            {
               TryAgainName: std::cout<<"name of creator "<<Task::get_id()+i<<":\n";
                std::cin >> name;
                if("z"<name || name<"A") {
                    std::cout << "wrong input, try again\n";
                    goto TryAgainName;
                }
                task[i] =Task( name,ir.make_procent(in));
            }
   get_info(in,task,n);
            delete []task;
   return 0;
}
