#include<vector>
#include<iostream>

using namespace std;
	void shuffle() {
        int n= 3;
			int shuffled[n] = {1,2,3};
			
			int leftSize = n;
			for(int i = n-1; i>=0; i--) {
				int j = rand()%leftSize;
                cout<<j<<endl;
				swap(shuffled[i], shuffled[j]);
				leftSize--;
			}
    for(int i=0;i<n;i++){
        cout<<" "<<shuffled[i]<<" "<<endl;
    }
	}

int main(){

    shuffle();
}
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int data =-1,Node*left = NULL , Node* right = NULL){
//         this->data = data;
//         this->left = left;
//         this->right = right;
//     }
// };
// void priorderPrint(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     cout<<root->data<<" ";

//     priorderPrint(root->left);
//     priorderPrint(root->right);
// }
// int main(){
//     Node* root = new Node(10);
//     root->left = new Node(20);
//     root->left->left = new Node(30);
//     root->left->left->left = new Node(40);
//     root->right = new Node(120);
//     root->right->right = new Node(130);
//     root->right->right->right = new Node(140);
//     priorderPrint(root);
//     return 0;
// }