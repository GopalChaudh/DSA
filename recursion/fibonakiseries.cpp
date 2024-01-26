// https://leetcode.com/problems/fibonacci-number/solutions/


#include<iostream>

using namespace std;
// with recursion
 inline int fib(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        return fib(n-1) + fib(n-2);
    }
    // with for loop
    //   inline int fib(int n) {
    //     if (n <= 0) return 0;
    //     if (n == 1) return 1;
    //     int ans = 0;
    //     {

    //     int n1=0,n2=1;
    //     for(int i =2;i<=n; i++){
    //        ans =n1+n2;
    //        n1 = n2;
    //        n2 = ans;
    //     }
    //     }
    //     return ans;
    // }
int main(){
    int ans = fib(6);
    cout<<endl<<ans;
    return 0;
}