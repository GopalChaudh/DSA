#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    string name = "Any Thing any time";
    int count=0;
    char target = 'i';
    for (char i:name){
        if(i==target)
            count++;
    }
    cout<<"target: "<<target<<"occurs: "<<count<<" times"<<endl;
    
    return 0;
}