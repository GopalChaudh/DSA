#include <iostream>
using namespace std;
int main()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = 10;
        }
    }

    return 0;
}