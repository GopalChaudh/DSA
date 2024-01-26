#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;
    node(){
        next = NULL;
    }
    node(int data){
        this->data = data;
        next = NULL;
    }
};
class List{
    node* head;
    public:
    List(){
        head = NULL;

    }
    void insertAthead(int data) ;// head insertion
    // void insertAtTail(int data) ;
    void print() ;
    bool search(int key) ;

};

int main(){
    List l1;
    l1.insertAthead(10);
    l1.insertAthead(19);
    l1.insertAthead(19);
    l1.insertAthead(19);
    // l1.insertAtTail(12);
    l1.print();
    bool found = l1.search(2);
    cout<<"\n key: "<<found;
}


void List::insertAthead(int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node* temp = new node(data);
  
        temp->next = head;
        head = temp;


}
void List::print(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


bool List::search(int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key) return true;
        temp = temp->next;
    }
    
    return false;
}