#include<iostream>
#include<stack>
using namespace std;

int presidence(char ch){
    if(ch == '+' || ch == '-') return 1;
    if(ch == '*' || ch == '/') return 2;
    if(ch == '^') return 3;

    return 0;
}

string infixTOPost(string input){
    stack<char> st;
    string ans ="";
    for(auto i : input){
        if((i>='a' && i<='z') || (i>='a' && i<='z')){
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
        return ans;
}


int main(){
    string inp = "(a+b)*(c-d)/e^f";
    string ans = infixTOPost(inp);
    cout<<ans<<" ";
    return 0;
}