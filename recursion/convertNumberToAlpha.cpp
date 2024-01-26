#include<iostream>

using namespace std;
string numbers[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eigth","nine"}; 
string converToString(int n){
    if(n<10){
        return numbers[n];
    }
    

    int lastDigit = n%10;

    return  converToString(n/10) + " " +numbers[lastDigit] ;


}

int main(){
    int n;
    cin>>n;
    string covertedNumber = converToString(n);
    cout<<covertedNumber;
    return 0;
}