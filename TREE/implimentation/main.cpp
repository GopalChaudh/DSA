#include<iostream>
#include<queue>
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

// print the tree 4 ways

void levelOrder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
       node* front = q.front();
       if(front == NULL ){
        cout<<endl;
        q.pop();
        if(!q.empty()){

        q.push(NULL);
        }
        continue;
       }

        cout<<front->data<<" ";

       q.pop();
       
       if(front->left){
        q.push(front->left);
       }
       if(front->right){
        // cout<<front->right->data<<" ";
        q.push(front->right);
       }
       }

    
    
}
// root left right
void prefix(node* root){
    if(root==nullptr){
        return ;
    }
    cout<<root->data<<" ";
    prefix(root->left);
    prefix(root->right);
    return ;

}

//  left right root
void postfix(node* root){
    if(root==nullptr){
        return ;
    }
    prefix(root->left);
    prefix(root->right);
    cout<<root->data<<" ";
    return ;

}

//  left root right
void infix(node* root){
    if(root==nullptr){
        return ;
    }
    prefix(root->left);
    cout<<root->data<<" ";
    prefix(root->right);
    return ;

}


        //         1
        //     2       3
        // 4       5 6     7
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 

int main(){
        cout<<"running"<<endl;
        node* root = buildTree(root);
        cout<<"level Order trivarsal: \n";
        levelOrder(root);
        cout<<"prefix: \n";
        prefix(root);
        cout<<"infix: \n";
        infix(root);
        cout<<"postfix: \n";
        postfix(root);
    return 0;
}