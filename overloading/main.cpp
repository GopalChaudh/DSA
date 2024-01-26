#include <iostream>
using namespace std;


class Complex {
    public:
    int real;
    int imaginary;
    Complex(){
        
    }
    Complex(int r, int i){
        this->real =r;
        this->imaginary = i;
    }
    
    
    
    // operator overloading c1+c2 ==> c1real with c2real and c1's imaginary with c2's imaginary
    
    Complex operator +(Complex c){
        Complex c3;
        c3.real = this->real + c.real;
        c3.imaginary = this->imaginary + c.imaginary;
        
        return c3;
    }
    Complex operator -(Complex c){
        Complex c3;
        c3.real = this->real - c.real;
        c3.imaginary = this->imaginary - c.imaginary;
    }
    
    
    void print(){
        cout<<real<<" +i "<<imaginary<<endl;
    }
};

int main()
{
    Complex C1(10,20);
    C1.print();
    Complex C2(20,10);
    C2.print();
    
    Complex C3 = C1 + C2;
    C3.print();
    Complex c4 = C1 - C3;

    C3.print();
    // Complex C3 = C1+C2; // call the overloaded code

    return 0;
}