#include<iostream>
#include<string>

using namespace std;

void reverseString(string &text){
    int first = 0;
    int last = text.size() - 1;
    while (first < last) {
        swap(text[first], text[last]);
        first++;
        last--;
    }
}

int main() {
    string name = "Gopal";
    reverseString(name);
    cout << name;

    return 0;
}
