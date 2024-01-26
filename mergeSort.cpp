#include<iostream>

using namespace std;

int* mergeSort(int arr1[],int size1,int*arr2,int size2){
    int index1 =0,index2 =0;
    int *newArray = new int[size1+size2];
    int i=0;
    while(index1 <size1 && index2 <size2 ){
        if(arr1[index1] <= arr2[index2]){
            newArray[i++] = arr1[index1++];
        }else{
            newArray[i++] = arr2[index2++];

        }
    }
    while(index1 <size1 ){
       
            newArray[i++] = arr1[index1++];
    }
    while(index2 <size2 ){
        
            newArray[i++] = arr2[index2++];

    }
    return newArray;
}

int main(){
    int arr1[4] = {1,4,7,9};
    int arr2[5] = {1,7,9,11,22};
    int *merged = mergeSort(arr1,4,arr2,5);
    for(int i=0;i<4+5;i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}