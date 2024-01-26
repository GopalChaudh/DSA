#include<iostream>
#include<algorithm>
using namespace std;
int ConvertToInt(string str){
    
    int ans = 0;
    for(char i: str){
        int num = i -'0';
        if(num < 0 || num >9){
            cout<<"Invalid string";
            return -1;
        }
        ans = (ans *10)+num;
    }
    return ans;
}


int main(int argc, char const *argv[]){
    string a = "135";
    cout<<ConvertToInt(a);
    return 0;
}