#include <iostream>
template <typename T>

T binary_search(T *ptr, int key, int n){
    int low=0;
    int high=n;
   while(low<high) {
       int mid = (high + low) / 2;
       if (key == mid)
           return ptr[mid];
       if (mid < key)
           low = mid + 1;
       else
           high = mid - 1;
   }
}
int main() {
    int n;
    int key;
    std::cout<<"put key"<<std::endl;
    std::cin>>key;
    std::cout<<"Key is:"<<key<<std::endl;
    std::cin>>n;
    std::cout<<"size"<<n;
    char *ptr=new char[n];
    for(int i=0;i<n;i++){
        std::cin>>ptr[i];
    }
    char result;
    result=binary_search<char>(ptr,key,n);
    std::cout << result << std::endl;

    return 0;
}
