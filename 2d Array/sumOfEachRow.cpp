#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int Array[3][3] = {
            {1,2,3},
            {4,5,6},
            {0,3,7}
    };
    int sum;
    // sum of rows
    for (int row = 0; row < 3; row++)
    {
        sum =0;
        for (int col = 0; col < 3; col++)
        {
            sum += Array[row][col];
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}