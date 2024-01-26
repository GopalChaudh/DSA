#include<iostream>
#define CONST 96


// For Small Letters
using namespace std;

int FindStronger(string str1,string str2){
        int arrayNo = 1;
        int strong1=0,strong2 =0;
        for (int i = 0; i < max(str1.length(),str2.length()); i++){
            if(i < str1.length()){
                strong1 += (str1[i] - CONST) * (i+1);
            }
            if(i < str2.length()){
                strong2 +=( str2[i] - CONST) * (i+1);
            }
        }
        if(strong2 > strong1){
            arrayNo = 2;
        }
        
    return arrayNo;
}

int main(){
    string str1 = "abc";
    string str2 = "bde";
    int arrindex = FindStronger(str1,str2);
    cout<<"the string "<<arrindex<< " is Stronger"<<endl;
    return 0;
}