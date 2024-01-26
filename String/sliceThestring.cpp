#include<iostream>

using namespace std;

string slice(string text,int i,int j){
    string ans = "";
    for(int k=i;k<j;k++){
        ans.push_back(text[k]);
    }
    return ans;
}
int main(int argc, char const *argv[]){
    string name = "Any Thing any time";
    
    cout<<slice(name,3,7);
    
    
    return 0;
}