#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int Array[3][3] = {
            {1,2,3},
            {4,5,6},
            {0,3,7}
    };
    int index;
    int largest_Sum = 0;
    // largest_Sum of rows
    for (int row = 0; row < 3; row++)
    {   static int temp;
        temp = 0;
        for (int col = 0; col < 3; col++)
        {
            temp += Array[row][col];
        }
        if(temp >largest_Sum){
            index = row;
            largest_Sum = temp;
        }
        
    }
        cout<<"Largest Row: "<<index+1<<endl<<"Sum: "<<largest_Sum<<endl;
    
    return 0;
}