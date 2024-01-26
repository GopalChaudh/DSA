#include<iostream>
#include<stack>
using namespace std;

int presidence(char ch){
    if(ch == '+' || ch == '-') return 1;
    if(ch == '*' || ch == '/') return 2;
    if(ch == '^') return 3;

    return 0;
}

string infixTOPre(string input){
    stack<char> st;
    string ans ="";
    for(auto i : input){
        if((i>='a' && i<='z') || (i>='A' && i<='Z')){
            ans+=i;
        }else if(i=='('){
            st.push(i);
        }else if(i==')'){
            while(!st.empty() && st.top() !='('){
                ans += st.top();
                st.pop();
            }
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
        }else{
            while (!st.empty() && presidence(st.top()) >= presidence(i)){
                ans += st.top();
                st.pop();
            }
            st.push(i);
            
        }
    }

        while (!st.empty())
        {
            ans+= st.top();
            st.pop();
        }
    // reversing
    for(auto i: ans){
        st.push(i);
    }
    ans = "";
    while (!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    
        return ans;
}


int main(){
    string inp = "(a+b)*(c-d)/e^f";
    stack<char> st;

    for(auto i:inp){
        st.push(i);
    }
    inp = "";
    while (!st.empty())
    {
        if(st.top() == '('){
            inp+=')';
            st.pop();
        }else if(st.top() == ')'){
            inp +='(';
            st.pop();
        }else{
        inp += st.top();
        st.pop();
        }
    }
    string ans = infixTOPre(inp);
    cout<<ans<<endl;
    
    return 0;
}