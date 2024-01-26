#include<iostream>
#include<vector>
using namespace std;

vector<string> split(string text,char target){
    vector<string> ans;
    string substr = "";
    for(int i=0;i<=text.length();i++){

            if(i==text.length()){
                ans.push_back(substr);
                break;
                
            }
            if(text[i] == target){
                ans.push_back(substr);
                substr = "";

            }else{

            substr.push_back(text[i]);
            }
         
            
    }
    return ans;
}

int main(int argc, char const *argv[]){
    string text = "Name Gopal";
    vector<string> ans = split(text,' ');
        
    return 0;
}