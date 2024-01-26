#include<iostream>

using namespace std;

class Base{
    public:
    Base(){
        cout<<"base call called "<<endl;
    }
    protected:
        void pro(){
            cout<<":->(protected ---Base1)called!\n";
        }
   ~Base(){
        cout<<"base call ~Deleted "<<endl;
    }

};

class Base2{
    public:
    
    Base2(){
        cout<<"base-----2 call called "<<endl;
    }
       void pro(){
            cout<<":->(protected ---Base-2) called!\n";
        }
   ~Base2(){
        cout<<"base------2 call ~Deleted "<<endl;
    }

};
class virtualTest:public Base2{
    public:
       virtual void pro(){
            cout<<" vartual pro!"<<endl;
        }
};
class drived:public Base,public Base2{
    public:
    
    drived(){
        cout<<"drived class called!"<<endl;
    }
        void procaller(){
            Base::pro();
        }
    ~drived(){
        cout<<"drived class called!"<<endl;
    }
};


int main(){
    // drived d1;
    Base2 *b2 ;
    b2 = new virtualTest();

    b2->pro();
        // d1.procaller();

    return 0;
}