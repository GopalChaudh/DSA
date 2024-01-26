#include<iostream>
#include<fstream>
using namespace std;


int main(){
    
    ofstream fs;
    string ch[] = {"apple","orange","banana","chary"};
    fs.open("File.txt",ios::out);
    for(int i=0;i<4;i++){

    fs<<ch[i]<<" ";
    }
    cout<<"success fully added!"<<endl;
    fs.close();
    ifstream ifs;
    ifs.open("File.txt",ios::in);
    string s;
    
    while(ifs>>s){
        cout<<s<<"--";
    }
    ifs.close();
    return 0;
}