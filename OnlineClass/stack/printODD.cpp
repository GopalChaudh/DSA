#include<iostream>
#include<stack>
using namespace std;

void printODD(stack<int> s){
    if(!s.empty()){
        if(s.top()&1){
        cout<<s.top()<<" ";
        }
        s.pop();
        printODD(s);
    }
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(21);
    s.push(33);
    s.push(40);
    s.push(59);
    printODD(s);
    
    return 0;
}