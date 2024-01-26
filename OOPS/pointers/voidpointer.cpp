#include<iostream>

using namespace std;

int main(){
    void * ptr;// always need to typecast
    int a = 10;
    ptr = &a;
    cout<<"typecast void for adress: "<<(int *) ptr<<endl;
    cout<<"access the data"<<(*(int *) ptr);
    return 0;
}