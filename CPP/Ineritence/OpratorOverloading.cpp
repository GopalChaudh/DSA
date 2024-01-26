#include<iostream>

using namespace std;

class B{
    int x,y;
    public:
    B(int x,int y){
        this->x = x;
        this->y = y;
    }
    B operator +(B b2){
        this->x = (this->x+ b2.x);
        this->y = (this->y + b2.y);
        return *this;
    }
    void print(){
        cout<<this->x<<" "<<this->y<<endl;
    }
};

int main(){
    B b1(1,5),b2(2,7);
    B b3 = b1+b2;
    b3.print();
    return 0;
}