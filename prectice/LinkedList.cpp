#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(Node* Next,int data){
        this->data = data;
        this->next = Next;
    }
};
void Insert(Node* &head,int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
}
void reverse(Node* &head){
    Node* prev = nullptr;
    Node* curr = head;
    while(curr !=NULL){
        Node* nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
    }
    head = prev;
}
 
void Appand(Node * &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;

}
void Print(Node* &head){
    Node* temp = head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
int main(int argc, char const *argv[]){
    Node* n = new Node(10);
    Node* n1 = n;
    // Node* n2 = new Node(10);
    Print(n1);
    Insert(n1,20);
    Print(n1);
    Insert(n1,30);
    Print(n1);
    Insert(n1,40);
    Print(n1);
    reverse(n1);
    Print(n1);
    return 0;
}