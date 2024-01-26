#include<iostream>

using namespace std;
class Coordinates{
    public:
    int x;
    int y;
    Coordinates(int x,int y){
        this->x = x;
        this->y = y;
    }
    void operator -(){
        x--;
        y--;
        cout<<"\n Decremented X & Y are: "<<x<<" "<<y<<endl;
    }
};
int main(int argc, char const *argv[]){
    Coordinates c(10,20);
    -c;
    return 0;
}