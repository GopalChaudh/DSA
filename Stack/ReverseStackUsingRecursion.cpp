#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> &s,int num){
    //base case
    if(s.empty()){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    insert(s,num);
    s.push(n);

}
void reverseStack(stack<int> &stack) {
    //base case
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    insert(stack,num);

}