#include <iostream>
#include <string> 

using namespace std;

int countWords(string text) {
    int count = 0;
    char last = ' '; 
    for (int i = 0; i < text.size(); i++) {
        if (last == ' ' && text[i] == ' ') {
            continue;
        }
        if (last != ' ' && text[i] == ' ') {
            count++;
        }
        last = text[i];
    }
    if (last != ' ') {
        count++;
    }
    return count;
}

int main(int argc, char const *argv[]) {
    int count = countWords("   Hi my   name is Gopal ");
    cout << count;
    return 0;
}
