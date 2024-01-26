#include<iostream>

using namespace std;
int i=0;
long long power(int a,int n){
    long long temp=0;
    i++;
   if(n==0){
    return 1;
   }
   if(n%2==0){
    temp = power(a,n/2);
    return temp*temp;
   }
    temp = power(a,(n-1)/2);
    return a*temp*temp;
   
   
}

int main(){
    int a,b;
    long long p;
    cout<<"Calulating a^b"<<endl;
    cout<<"Value of a: ";
    cin>>a;
    cout<<"Value of b: ";
    cin>>b;
    p = power(a,b);
    cout<<"Power is: "<<p<<endl;
    cout<<"itrations: "<<i<<endl;
    return 0;
}

