#include <iostream>

using namespace std;

int power(int x,int y){
    if(y==0){
        return 1;
    }
    if(y==1 ){
        return x;
    }
    int p = power(x,y/2);
    if(y&1){
        return p * p * x;
    }
    else{
        return p * p;
    }
}


// for 100 -> 7 itration;

// power(2,100) 
//      ^
// power(x,50)
//      ^
// power(x,25)
//      ^
// power(x,12)
//      ^
// power(x,6)
//      ^
// power(x,3)
//      ^
// power(x,1)




int main(){
    cout<<power(2,10)<<" "<<endl;
    return 0;
}