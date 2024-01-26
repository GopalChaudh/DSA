#include<iostream>

using namespace std;

class Museum{
    private:
    string name ;
    int items;
    public:
    Museum(){
        name ="";
        items = 0;
    }
    Museum(string name  ="not-defined",int items){
        this->name = name;
        this->items = items;
    }
    void addName(string name){
        this->name = name;
    }
    void addNameAndItems(string name,int items){
        this->name = name;
        this->items = items;
    }
    void AddItems(int items){
        this->items = items;
    }
    string getName(){
        return name;
    }
    int getItems(){
        return items;
    }
};

int main(int argc, char const *argv[]){
    Museum *m1 = new Museum();
    Museum *m2 = new Museum();
    Museum *m3 = new Museum("museum3",100);
    m1->addName("museum1");
    m1->AddItems(10);
    m2->addNameAndItems("museum2",70);
    // printing 
    cout<<"Museum1:"<<"Name: "<<m1->getName()<<" items: "<<m1->getItems()<<endl;
    cout<<"Museum1:"<<"Name: "<<m2->getName()<<" items: "<<m2->getItems()<<endl;
    cout<<"Museum1:"<<"Name: "<<m3->getName()<<" items: "<<m3->getItems()<<endl;

    return 0;
}