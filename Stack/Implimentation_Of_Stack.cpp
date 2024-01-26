#include<iostream>

using namespace std;


class Stack{
    public:
        int *arr;
        int size;
        int top ;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int ele){
    if(size-top > 1 && top < size){
        arr[++top] = ele;
    }else{
        cout<<"stack overflow"<<endl;
    }
    }
    void pop(){
        if(top < 0){
            cout<<"stack Underflow"<<endl;
        }else{
            top--;

        }
    }
    int peek(){
        return arr[top];
    }
    bool empty(){
        if(top ==-1){
           return true;
        }else{
          return false;
        }
    }
};

int main(int argc, char const *argv[]){
    Stack st(5);
    if(st.empty()){
        cout << "Stack is empty!" << endl;
    }else{
        cout << "Stack is not empty!" << endl;
    }
    st.push(10);
      if(st.empty()){
        cout << "Stack is empty!" << endl;
    }else{
        cout << "Stack is not empty!" << endl;
    }
    return 0;
}
