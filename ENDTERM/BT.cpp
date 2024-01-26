#include<iostream>
#include<list>
using namespace std;

template<typename T>
class node {
public:
    T data; // Change int T to T data
    node *left, *right;
    node(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

template<typename T>
class Tree {
public:
    node<T> *root;
    Tree() {
        root = NULL;
    }
    void buildTree();
    void levelOrderTraversal();
    void preorder(node<T> *root); 
    void postOrder(node<T> *root); 
    void intOrder(node<T> *root); 
};

template<typename T>
void Tree<T>::buildTree() {
    T data; 
    cin >> data;
    if (data == -1) {
        return;
    }
    root = new node<T>(data);
    list<node<T>*> queue;
    queue.push_back(root);

    while (!queue.empty()) {
        node<T>* current = queue.front();
        queue.pop_front();

        cin >> data;
        if (data != -1) {
            current->left = new node<T>(data);
            queue.push_back(current->left);
        }

        cin >> data;
        if (data != -1) {
            current->right = new node<T>(data); 
            queue.push_back(current->right);
        }
    }
}

template<typename T>
void Tree<T>::levelOrderTraversal() {
    if (root == NULL) {
        return;
    }
    list<node<T>*> queue;
    queue.push_back(root);
    while (!queue.empty()) {
        node<T>* temp = queue.front();
        queue.pop_front();
        cout << temp->data << " ";
        if (temp->left) {
            queue.push_back(temp->left);
        }
        if (temp->right) {
            queue.push_back(temp->right);
        }
    }
}

template<typename T>
void Tree<T>::preorder(node<T>* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

template<typename T>
void Tree<T>::postOrder(node<T>* root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

template<typename T>
void Tree<T>::intOrder(node<T>* root) {
    if (root == NULL) {
        return;
    }
    intOrder(root->left);
    cout << root->data << " ";
    intOrder(root->right);
}

int main() {
    Tree<int> t1;
    t1.buildTree();
    cout << "\nlevel order traversal: ";
    t1.levelOrderTraversal();
    cout << "\nin-order traversal: ";
    t1.intOrder(t1.root);
    cout << "\npost-order traversal: ";
    t1.postOrder(t1.root);
    cout << "\npre-order traversal: ";
    t1.preorder(t1.root);
    cout << endl;
    return 0;
}
