#include<iostream>
#include<stack>

using namespace std;

int priority(char c){
    if(c=='+' || c=='-') return 1;
    if(c=='*' || c=='/') return 2;
    if(c=='^') return 3;

    return 0;
}

string InfixTopreFix(string input){
    string ans = "";
    stack<char> st;

    for(char i: input){
        if((i >='a' && i<='z') || (i >='A' && i<='Z')){
            ans+=i;

        }else if(i=='('){
            st.push(i);

        }else if(i==')'){
            while ( !st.empty() && st.top() !='(')
            {
                ans+= st.top();


                st.pop();
            }
            if(!st.empty() && st.top() == '('){
                st.pop();
            }
            

        }else{

            while(!st.empty() && priority(st.top()) >= priority(i)){
                ans+=st.top();

                st.pop();
            }
            st.push(i);



        }


    }


    while(!st.empty()){
        ans+=st.top();
            // cout<<ans<<"---";

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
    string ans = InfixTopreFix(inp);
    for(int i= ans.length() ; i>=0;i--){
        cout<<ans[i]<<" ";
    }

    return 0;
}
