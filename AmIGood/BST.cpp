#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *left,*right;
    node(){
        left = nullptr;
        right= nullptr;
    }
    node(int d){
        data = d;
        left = nullptr;
        right= nullptr;
    }
};
node* append(node* &root, int d) {
    if (root == nullptr) {
        root = new node(d);
        return root;
    }
    if (d < root->data) {
        root->left = append(root->left, d);
    }
    else if (d > root->data) {
        root->right = append(root->right, d);
    }

    return root;
}

void buildTree(node* &root){
    int d;
    cin>>d;
    if(d == -1){
        return ;
    }
        
    root = append(root,d);

    buildTree(root);
 
}

void preorder(node * root){
    if(root == nullptr){
        return ;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(node * root){
    if(root == nullptr){
        return ;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
bool search(node* root,int d){
    if(root == nullptr){
        return false;
    }
    bool found = false;
    if(root->data == d){
        return true;
    }
    else if(d < root->data){
       found = search(root->left,d);
    }else if(d > root->data){
        found = search(root->right,d);
    }
    return found;
}
node* findMin(node* root){
    while(root->left != nullptr){
        root = root->left;
    }
    return root;
}
node* deleteNode(node* root,int key){
    if(root == nullptr){
        return root;
    }
    
    if(key < root->data){
        root->left = deleteNode(root->left,key);
    }
    
   else if(key > root->data){
        root->right = deleteNode(root->right,key);
    }
    else{
        // key  found !
        
        // if left is null
        if(root->left == nullptr){
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == nullptr){
            node* temp = root->left;
            delete root;
            return temp;
        }else{
            // both sides are not null
            node* temp = findMin(root);
            root->data = temp->data;
            root->right = deleteNode(root->right,temp->data);
        }
    }
    return root;
    
}

int main(){
    // 11 21 37 19 22 -1
    node *root;
    buildTree(root);
    cout<<"printing...\n";
    inorder(root);
    deleteNode(root,19);
    cout<<"after deletion printing...\n";
    inorder(root);
    if(search(root,6)){
     cout<<"found!"<<endl;   
    }
    else{
     cout<<"Not found!"<<endl;   
    }

    
    return 0;
}