

#include<iostream>
using namespace std;

template <typename Type>
class Node{
    public:
        int data;
        Node<int>* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
   

};


void InsertAtHead(Node<int>* &head,int data){
    Node<int>* temp = new Node<int>(data);
    temp->next = head;
    head = temp;

}


Node<int> *reverseList(Node<int> *head) 
{       
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node<int> *shead = reverseList(head->next);

    head -> next -> next = head;
    head -> next = NULL;

    
    return shead;


}
void print(Node<int>* head){
    while (head !=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node<int>* n = new Node<int>(10);

    Node<int>* head = n;
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    InsertAtHead(head,40);
    InsertAtHead(head,50);
    print(head);
    head = reverseList(head);
    print(head);
    return 0;
}
