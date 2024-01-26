#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {

    if (n <= 1) {
        return true;
    }
    
    if (arr[n - 1] < arr[n - 2]) {
        return false;
    }
    
    return isSorted(arr, n - 1);
}

int main() {
    int array[] = {1, 3, 5, 7, 9};
    int size = sizeof(array) / sizeof(array[0]);
    
    if (isSorted(array, size)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    
    return 0;
}
