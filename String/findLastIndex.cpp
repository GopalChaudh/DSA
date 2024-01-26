#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    string name = "Any Thing any time";
    int index=-1;
    char target = 'i';
    for (int i=(name.length()-1);i>0;i--){
        if(name[i]==target)
            index = i;
    }
    if(index !=-1){

    cout<<"target: "<<target<<"found at: "<<index<<endl;
    }else{
        cout<<"element not found"<<endl;
    }
    
    return 0;
}