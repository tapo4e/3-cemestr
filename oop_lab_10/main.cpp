#include <iostream>
template <typename T> class Node;
template <typename T> class Ring;

    template <typename T> class Node{
    public:
        T value;
        Node<T> *next;
    public:

        Node(T value=T()){
        this->value=value;
        this->next= nullptr;
        }
    };
template <typename T> class Ring{
private:
    int size;
    Node<T> *head, *tail;
public:
    Ring(){
    this->size=0;
    this->head= nullptr;
    this->tail= nullptr;
    };
    ~Ring()=default;
void push_back(T a){
    size++;
    Node<T> *temp=new  Node(a);
    temp->next=head;
    temp->value=a;
    if(head!= NULL) {
    tail->next=temp;
    tail=temp;
    }
    else{
        head=tail=temp;
    }
}
void show() {
    int show_=0;
    Node<T> *temHead = head;
    while (show_!=size) {
        std::cout << temHead->value << std::endl;
    temHead=temHead->next;
    show_++;
    }
}
void delete_(T a) {
    try {
        int size_ = 0;
        Node<T> *goRing = head;
        Node<T> *predNode = tail;
        while (size_ != size) {
            if (a == goRing->value) {
                if (goRing == head) {
                    tail->next = head->next;
                    head = head->next;
                }
                if (goRing == tail) {
                    tail = predNode;
                    tail->next = goRing->next;
                } else {
                    predNode->next = goRing->next;
                }
                //size--;
            }
            size_++;
            goRing = goRing->next;
            predNode = predNode->next;
        }

        if (size_ == size)
            throw 1;
    }
    catch (int i){
        std::cout<<"Bad"<<std::endl;
    }
}

};
int main() {
    bool c =true;
    Ring<int> lst;
    while(c) {
        int count = 0;
    std::cout<<"Add (1)"<<std::endl;
    std::cout<<"Show (2)"<<std::endl;
    std::cout<<"Find and remove (3)"<<std::endl;
    std::cin>>count;



        switch (count) {

            case 1: {
                int s;
                std::cin>>s;
                lst.push_back(s);
                break;
            }

            case 2 : {
                std::cout<<"ring"<<std::endl;
                lst.show();
                break;
            }
            case 3 : {
                int b;
                std::cin>>b;
                lst.delete_(b);
                break;
            }
            default: {
                c = false;
                break;
            }
            }


    }

    return 0;
}
