#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";

    // Using size() function to find the length of the strings
    cout << "Length of s1: " << s1.size() << endl;
    cout << "Length of s2: " << s2.size() << endl;

    // Using substr() function to extract a substring
    string substring = s1.substr(1, 3);
    cout << "Substring of s1: " << substring << endl;

    // Using + operator to concatenate strings
    string concatenated = s1 + " " + s2;
    cout << "Concatenated string: " << concatenated << endl;

    // Using compare() function to compare two strings
    int result = s1.compare(s2);
    cout<<result<<endl<<endl<<endl;
    if (result == 0) {
        cout << "s1 is equal to s2" << endl;
    } else if (result < 0) {
        cout << "s1 is smaller than s2" << endl;
    } else {
        cout << "s1 is greater than s2" << endl;
    }

    // Using reverse() function to reverse a string
    reverse(s1.begin(), s1.end());
    cout << "Reversed s1: " << s1 << endl;

    // Using sort() function to sort characters in a string
    sort(s2.begin(), s2.end());
    cout << "Sorted s2: " << s2 << endl;

    return 0;
}
