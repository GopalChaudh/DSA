#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int *ptr;
    int arr[10];
    ptr = arr+20;// we are providing the address that is not valid 
    return 0;
}