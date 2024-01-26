#include<iostream>

using namespace std;

bool search(int *arr,int start,int end,int &key){

    if(start>end){
        return false;
    }
    int mid = start + (end-start)/2;
    if(key< arr[mid]){
        return search(arr,start,mid-1,key);
    }
    if(key > arr[mid]){
        return search(arr,mid+1,end,key);
    }
    if(key == arr[mid]){
        return true;
    }
}


int main(){
    int arr[5] = {10,20,30,40,50};
    int key =50;
    if(search(arr,0,4,key)){
        cout<<"element Found!"<<endl;
    }else
        cout<<"element not Found!"<<endl;
    return 0;
}