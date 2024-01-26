#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int *b = &a;
    int **c = &b;
    cout<<a<<" == "<< *b<<endl;
    cout<<b<<" == "<< *c<<endl;
    cout<<a<<" == "<< **c<<endl;
    cout<<&a<<" == "<< b<<endl;
    cout<<&b<<" == "<< c<<endl;
    return 0;
}