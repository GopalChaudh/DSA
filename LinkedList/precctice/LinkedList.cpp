#include <iostream>

using namespace std;


class Node {
public:
    int  data;
    Node* next;
    
    Node() : data(0), next(nullptr) {}
    
    Node(int data) : data(data), next(nullptr) {}
};


class LinkedList {
public:
    Node* head;
    
    LinkedList() : head(nullptr) {}

    // Operations
    void insert(int data); // Fixed the template type here
    void sort();
    void print();
    int mid();
    int end();
    int count();
    void insertAtPosition(int,int);
    // Delete the node from a given position
    void deleteNode(int position);
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.insertAtPosition(0,60);
    list.print();
    cout<<endl;
    cout<<"mid is: "<<list.mid()<<endl;
    cout<<"end is: "<<list.end()<<endl;


    return 0;
}




// Definitions for LinkedList member functions

void LinkedList::insert(int data) {
    Node *temp = new Node(data);
    if(head == NULL){
        head = temp;
        return ;
    }
    Node* saveNode = head; 
    // inert at last
    while (head->next !=NULL)
    {
        head= head->next;
    }
    head ->next = temp;
    head = saveNode; 
    
}


void LinkedList::sort() {
    
}


void LinkedList::print() {
    Node *temp  = head;
    while(temp !=NULL){
         cout<<temp->data<<" ";
         temp = temp->next;
    }
}


int LinkedList::mid() {
    Node* slow = head;
    Node* fast = head;

    while(fast->next != NULL){
        fast  = fast->next->next;
        slow = slow->next;
    }
   
    return slow->data;
}


int LinkedList::end() {
    Node * temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    return temp->data; 
}


void LinkedList::deleteNode(int position) {
    
    
}
void LinkedList::insertAtPosition(int position,int data) {
    
    int index = 0;
    Node* temp = head;
    if(position == 0){
    }
    // goto the position
    while (index < position-1 && temp!=NULL)
    {
      temp = temp->next;
    }

        insert(data);
}

int LinkedList::count(){
    
}
