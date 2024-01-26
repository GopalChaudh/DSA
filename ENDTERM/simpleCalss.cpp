#include<iostream>
using namespace std;


int main(){
   int id[3];
   string name[3];
    for(int i=0;i<3;i++){
        cin>>name[i];
        cin>>id[i];
    }
    for(int i=0;i<3;i++){
         cout<<"Name "<<name[i];
         cout<<"id "<<id[i];
    }

}