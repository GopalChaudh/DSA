#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char const *argv[]){
    fstream myFile;
    myFile.open("First.txt",ios::out);// write mode
    if(myFile.is_open()){
        myFile<<"hi !\n ";
        myFile<<" i am a new file"<<endl;
        myFile.close();
    }
    myFile.open("First.txt",ios::app);// append mode
    if(myFile.is_open()){
        myFile<<"appending !\n ";
        myFile<<" i am same file"<<endl;
        myFile.close();
    }
    myFile.open("First.txt",ios::in);// read
    string line;
    if(myFile.is_open()){
       while (getline(myFile,line))
       {
        cout<<line<<endl;
       }
       
        myFile.close();
    }
    // system("pause>0");
    return 0;
}