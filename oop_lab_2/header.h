#include <iostream>
#include <string>
#ifndef OOP_LAB_2_HEADER_H
#define OOP_LAB_2_HEADER_H
 class Chek;
 class Task{
private:
     static int id;
     std::string name;
    int procent_of_work;
public:
    Task()
    {
        name = "";
        procent_of_work=0;
    }
    Task(std::string &name_,int procent_of_work_)
    :  name(name_), procent_of_work(procent_of_work_)
    {
    }

    ~Task()
    {

    }
     static int get_id(){
             return id;
    }

     friend class Chek;
    friend void get_info(Task &task, Task *mass,int n);
};
int Task::id=1;

 class Chek{
 private:  int procent;
 public:
     Chek(){
     procent=0;
     }
     int  make_procent(Task &task) {
         TryAgainProcent:
         std::cout << "procent of work"  << ":\n";
         std::cin >> task.procent_of_work;

         if (100 < task.procent_of_work || task.procent_of_work <0) {
             std::cout << "wrong input try again\n";
             goto TryAgainProcent;
         }
         procent= task.procent_of_work;
         return procent;
     }

 };
#endif
