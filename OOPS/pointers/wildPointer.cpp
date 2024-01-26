#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    // when we are trying to acces the memory location that is not initialize;
    int *arr = new int[1];
    *(arr+0 )= 2;
    *(arr+1 )= 4;
    for (int i = 0; i < 10; i++)
    {
        cout<<" "<<*(arr +i);// we have initialized ony two block of mamory but accessing 10 block that why it is a wild pointer
    }
    
    return 0;
}