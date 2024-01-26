#include <iostream>

using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << target << endl;
        return;
    }
    towerOfHanoi(n - 1, source, target, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << target << endl;
    towerOfHanoi(n - 1, auxiliary, source, target);
}

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;
    towerOfHanoi(numDisks, 'A', 'B', 'C');
    return 0;
}