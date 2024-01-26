#include<iostream>

using namespace std;

int findSum(int *array,int size){
    if(size==1){
        return array[size-1];
    }
    int total = array[size-1] + findSum(array , --size);
}
int main(){
    int arr[] ={1,6,9,2,5,7,1,3,6}  ;

    int totalsum = findSum(arr,9);
    cout<<totalsum;
    return 0;
}