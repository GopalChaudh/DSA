#include<iostream>

using namespace std;
//rootForce
int searchInArray(int Array[5][5] , int key){
     for(int i=0;i<5 ;i++){
        for (int j = 0; j < 5; j++)
        {
            if(Array[i][j] == key){
                return 0;
            }
        }
        
    }
    return -1;
}
int searchInArrayBinarySearch(int Array[5][5] , int key){
    int start=0,end = 4; 
    int mid;
    for (int i = 0; i < 5; i++)
    {
        start = 0,end = 4;
        if()
        while (start <= end) {
            mid = (start + end) / 2;
            if (Array[i][mid] == key) {
                return 0;
            } else if (Array[i][mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
        

    return -1;

}

int main(int argc, char const *argv[]){
    int Array[5][5] = {
        {10,20,30,40,59},
        {12,22,35,42,69},
        {15,27,37,43,79},
        {19,29,39,45,89},
        {30,39,41,50,99}
    };
    int key = 41;
   int ans = searchInArrayBinarySearch(Array,key);
    if(!ans){
        cout<<"Found !";
    }
    return 0;
}