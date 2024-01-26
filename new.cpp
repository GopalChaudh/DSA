#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x, k;
    cin >> x >> k;

    int index = lower_bound(arr, arr + n, x) - arr;

    int left = index - 1;
    int right = index;

    cout << "Output: ";
    while (k > 0) {
        if (left >= 0 && right < n) {
            if (abs(arr[left] - x) <= abs(arr[right] - x)) {
                cout << arr[right];
                right++;
            } else {
                cout << arr[left];
                left--;
            }
        } else if (left >= 0) {
            cout << arr[left];
            left--;
        } else if (right < n) {
            cout << arr[right];
            right++;
        }

        if (k > 1) {
            cout << " ";
        }
        k--;
    }

    return 0;
}
