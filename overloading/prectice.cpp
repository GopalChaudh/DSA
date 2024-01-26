#include<iostream>

using namespace std;
class Student{
     public:
        int dsa_marks;
        int cpp_marks;
        string name;
        int r_no;
   
    Student(int dsa_marks = 0 ,int cpp_marks = 0,string name = "undefined",int r_no = -1){
        this->dsa_marks = dsa_marks;
        this->cpp_marks = cpp_marks;
        this->r_no = r_no;
        this->name = name;

    }
    // make equal
    bool operator =(Student s2){
       this->dsa_marks = s2.dsa_marks;
       this->cpp_marks = s2.cpp_marks;
       this->r_no = s2.r_no;
       this->name = s2.name;
        
        
    }
    // check is equal
    bool operator ==(Student s2){
        if(this->dsa_marks == s2.dsa_marks && this->cpp_marks == s2.cpp_marks){
            return true;
        }
        return false;
    }
    // check less <
    bool operator <(Student s2){
        int s1Total = this->dsa_marks + this->cpp_marks;
        int s2Total = s2.dsa_marks + s2.cpp_marks;
        if(s1Total<s2Total){
            return true;
        }
        return false;
    }
    // <=
    bool operator <=(Student s2){
        int s1Total = this->dsa_marks + this->cpp_marks;
        int s2Total = s2.dsa_marks + s2.cpp_marks;
        if(s1Total<=s2Total){
            return true;
        }
        return false;
    }
    // >
    bool operator >(Student s2){
        int s1Total = this->dsa_marks + this->cpp_marks;
        int s2Total = s2.dsa_marks + s2.cpp_marks;
        if(s1Total>s2Total){
            return true;
        }
        return false;
    }
    // >=
    bool operator >=(Student s2){
        int s1Total = this->dsa_marks + this->cpp_marks;
        int s2Total = s2.dsa_marks + s2.cpp_marks;
        if(s1Total>=s2Total){
            return true;
        }
        return false;
    }
};
int main(){
    Student s1(99,99,"Gopal",12209603);
    Student s2(9,9,"raj",1220037);
    if(s2<s1){
        cout<<"R-NO: " << s2.r_no <<" Name: "<<s2.name<<" Need To study more"<<endl;
    }
    if(s1<=s2){
        cout<<"s1<=s2"<<endl;
    }
    if(s1>s2){
        cout<<"R-NO: " << s1.r_no <<" Name: "<<s1.name<<" is the topper"<<endl;
    }
    s1 = s2;
    if(s1==s2){
        cout<<"s1==s2"<<endl;
    }
    
    return 0;
}