#include<iostream>

using namespace std;



// 7. use new keyword
class User{
    private:
    // data members
    string name;
    int age;
    int rno;
    public:
    // non-default params
    User(){
    string name = "undefine";
    int age = -1;
    int rno = -1;
        
    }
    // parameterised
    User(string name,int age = 18,int rno = 12209){
        this->name = name;
        this->age = age;
        this->rno = rno;
    }
    // getter
    string getName(){
        return this->name;
    }
    // setter
    void setName(string name){
        this->name = name;
    }
   
};

int main(){
    //  create object using new
    User* u1 = new User();
    User* u2 = new User("Gopal",18);
    cout<<u1->getName();
    cout<<u2->getName();
    u1->setName("Newme");
    u2->setName("NewN000me");
    cout<<u1->getName();
    cout<<u2->getName();

    return 0;
}