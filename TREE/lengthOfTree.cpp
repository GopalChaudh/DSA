#include<iostream>

using namespace std;

class node{
    public:
        node* left;
        node* right;
        int data;
        node(int data){
            left = nullptr;
            right = nullptr;
            this->data = data;
        }
};

node* buildTree(node* &root){
    int data;
    cin>>data;
    if(data == -1){
        root = nullptr;
        return root ;
    }
    root = new node(data);  
     cout << "Enter left child of " << data << ":\n";
    buildTree(root->left);
     cout << "Enter right child of " << data << ":\n";
    buildTree(root->right);
    return root;

}
int findLength(node* root){
    if(root==nullptr){
        return 0;
    }
    int left = findLength(root->left);
    int right = findLength(root->right);
    int len = max(left,right) +1;
    return len;
    }
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
int main(){
    node* root = buildTree(root);
    int len = findLength(root);
    cout<<"lenght : "<<len<<endl;
    return 0;
}