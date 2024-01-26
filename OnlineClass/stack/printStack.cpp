#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> s){
    if(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        print(s);
    }
}

void printReverse(stack<int> s){
    if(s.empty()){
        return ;
    }
    
    int temp = s.top();
        s.pop();
        print(s);
    cout<<temp<<" ";

}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    print(s);
    cout<<endl;
    printReverse(s);
    return 0;
}