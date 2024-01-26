#include<iostream>

using namespace std;

class Birthday{
    //private
        string name;
        string gender;
        int age ;
        string date;

    public:
        //unperamitrized cunstructor
        Birthday(){
            this->age = 0;
            this->name = "unknown";
            this->date = "00-00-00";
            this->gender = "unknown";
        }
        // peramitrized cunstructor
        Birthday(string name,int age,string gender, string date){
            this->name = name;
            this->age = age;
            this->gender = gender;
            this->date = date;

        }
        // other functions
        void print(){
            if(name != "unknown"){

            cout<<"---------------------------------------------"<<endl;
            cout<<"\t Happy Birthday "<<this->name<<" !"<<endl;
            }else{
                cout<<"Details Not Filled"<<endl;
            }
        }
        //getters
        string getname(){
            return name;
        }
        string getgender(){
            return gender;
        }
        string getdate(){
            return date;
        }
        int getage(){
            return age;
        }
        //setters
        void setname(string name){
            this ->name = name;
        }
        void setgender(string gender){
            this ->gender = gender;
        }
        void setdate(string date){
            this ->date = date;
        }
        int setage(int age){
            this ->age = age;
        }
        
};

int main(){
    Birthday defBBoy;
    Birthday *preaBBoy = new Birthday("Gopal",18,"01-01-2005","Male");
    defBBoy.print();
    defBBoy.setage(10);
    defBBoy.setname("raj");
    cout<<"Name: "<<defBBoy.getname()<<endl;
    defBBoy.setdate("01-09-2004");
    defBBoy.print();
    cout<<"Date: "<<defBBoy.getdate()<<endl;

    preaBBoy->print();
    
    

    return 0;
}