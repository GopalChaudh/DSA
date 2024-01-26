#include<iostream>
#include<string>
using namespace std;

int main(){
     // way 1;
     char basic[20] = "HELLO";// take 20 bytes
     string name = "nina";
        // basic = "HI"; // invalid
     // 2nd way
     char *ptr = "HELLO"; // take 5 bytes
     cout<<ptr<<endl;
     cout<<ptr[0]<<" opration "<<*(ptr+1)<<endl;
     cout<<sizeof(ptr)/sizeof(char)<<" size ";
        ptr = "ind";//valid
        ptr++;
     cout<<sizeof(ptr)/sizeof(char);
     cout<<ptr;// direct access
    return 0;
}