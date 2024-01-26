#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char const *argv[]){
    string name ;
    cin>>name;

    stack<int> s;
    cout<<"before reverse: "<<name<<endl;;
    for(int i =0 ;i<name.size();i++){
        s.push(name[i]);
    }
    name = "";
    while(!s.empty()){
        char ele = s.top();
        name +=ele;
        s.pop();

    }
    cout<<"After reverse: "<<name<<endl;;
    return 0;
}
//output
// before reverse: GopalJi
// After reverse: iJlapoG