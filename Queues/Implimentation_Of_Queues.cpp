#include<iostream>

using namespace std;
// FCFS -> first come First serve
class Queue{
    public:
        int size;
        int rear;
        int *arr;
        int first;
    Queue(int size){
        this->size = size;
        rear = 0;
        arr = new int[size];
        first =0;
    }
    // push in the last of the Queue
    void push(int data){
        if(rear < size){
            arr[rear++] = data;
        }else{
            cout<<"Queue is FULL !"<<endl;
        }
    }

    // pop from the first of the Queue
    void pop(){
        if(rear == first){
            cout<<"Queue is Empty";
            return ;
        }
        int olddata = arr[first++];
        if(first == rear){
            first = 0;
            rear = 0;
        }
        cout<<"Data: "<<olddata<<" Deleted";

    }
    bool Empty(){
        if(rear == first){
            return true;
        }
        return false;
    }

  int front(){
    if(rear == first ){
        cout<<"Queue is Empty!"<<endl;
    }
    return arr[first];
  }
  void print(){
    if(rear == first){
        return;
    }
    cout<<endl<<"[ ";
    for(int i=first; i<rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
  }
};

int main(int argc, char const *argv[]){
    Queue q1(20);
    q1.push(10);
    q1.print();
    q1.push(20);
    q1.print();
    q1.print();
    q1.push(30);
    q1.print();
    q1.pop();
    q1.print();
    q1.pop();
    q1.print();
    q1.pop();
    q1.print();
    q1.push(90);
    q1.print();
    cout<<"front "<<q1.front();
    return 0;
}