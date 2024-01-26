#include<iostream>

using namespace std;

int main(){
    int arr[3] = {}; // by using {} it'll take default value 0
    int arr2d[3][2] = {{1,2},{3,4},{6,7}};
    for (int  i = 0; i < 3; i++)
    {
    cout<<*(arr+i)<<" ";
        
    }
   
    cout<<endl<<"for 2d: "<<endl;
    // for 2d
    for (int  i = 0; i < 3; i++)
    {
    for (int  j = 0; j < 2; j++)
    {
    cout<<*(*(arr2d+i) + j)<<" ";// ARR[I][J]
        
    }
    cout<<endl;
        
    }
   
    return 0;
}