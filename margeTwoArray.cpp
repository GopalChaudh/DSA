#include<iostream>

using namespace std;
int merge(int arr1[],int arr2[],int size1,int size2){
    int temp[size1 + size2];
    int index = 0;
    for(int i = 0   ; i < size1 ; i +=1) {
        temp[index] = arr1[i];
        index++;
    }
    for (int i = 0; i < size2; i++)
    {
       temp[index] = arr1[i];
       index++;
    }
    for(int i: temp){
        cout << temp[i]<<endl;
    }
    

}
int main(int argc, char const *argv[]){
    int a1[5] = {1,2,3,4,5};
    int a2[4] = {1,2,3,4};
    merge(a1, a2,5,4);
    return 0;
}