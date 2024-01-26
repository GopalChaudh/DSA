#include<iostream>

using namespace std;
// using heap storage
int main(){
    int n = 3;
    int **array = new int *[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = new int[n];
    }


    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        cin>>array[i][j];
       }
       
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        cout<<array[i][j]<<"\t";
       }
       cout<<endl;
    }
    // freeing te heap
    for (int i = 0; i < n; i++)
    {
        delete [] array[i] ;
    }
    delete []array;

    return 0;
}