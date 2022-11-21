#ifndef OOP_LAB_8_HEAD_H
#define OOP_LAB_8_HEAD_H
template<class T>
class Set {
private:
    static  inline T mass[5]={1.5,3.4,2.3,4.2,-5.1};
     int size;
    T *mass1;
public:
    Set(int size){
        this->size=size;
        mass1=new T[size];
    };

    ~Set(){
        delete[] mass1;

    }
    static T* getMass(){
        return mass;
    }
     static T getItem(int index){
        return mass[index];
    }

     int getSize(){
        return size;
    }


    void pushBack(int size_){
       T value = 0;
        std::cin >> value;
        for(int i=0;i<size_-1;i++){
            mass1[i]=mass[i];
        }
        mass1[size_-1]=value;
    }

    void pop_back( int size_, int a){
        for (int i=a;i<size_+1;i++){
                mass[i] = mass[i+1];
            }

        for(int i=0; i<size_;i++){
            mass1[i]=mass[i];
        }
    }
    void getMass1(){
        for(int i=0;i<size;i++){
            std::cout<<mass1[i]<<" ";
        }
    }
     T search(int value){
        for (int i =0;i<5;i++){
            if(i==value)
            return mass[i];
            }
        return -1;
        }
};


class Error {
public :
    Error(){

}
    void error(const char a[256]){
    try{
        throw "\n";
    }
    catch(const char *a){
        std::cout<<"Next operation\n";
    }
}

};
#endif //OOP_LAB_8_HEAD_H
