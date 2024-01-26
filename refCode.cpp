#include<bits/stdc++.h>

using namespace std;
struct Node{
    Node* left;
    Node* right;
    int data;
};

TreeNode* constructBinaryTree(vector<int>& arr, int idx) {
    if (idx >= arr.size()) {
        return nullptr;
    }

    TreeNode* node = new TreeNode(arr[idx]);
    node->left = constructBinaryTree(arr, 2 * idx + 1);
    node->right = constructBinaryTree(arr, 2 * idx + 2);

    return node;
}

Node* insertLevelOrder(int arr[], int i, int n) {
    if (i < n) {
        Node* newNode = new Node(arr[i]);
        newNode->left = insertLevelOrder(arr, 2 * i + 1, n);
        newNode->right = insertLevelOrder(arr, 2 * i + 2, n);
        return newNode;
    }
    return nullptr;
}

int findKthSmallest(TreeNode* root, int k) {
        int count = 0;
        int kthSmallest = -1;
        TreeNode* current = root;

        while (current != NULL) {
            if (current->left == NULL) {
                count++;
                if (count == k) {
                    kthSmallest = current->val;
                }
                current = current->right;
            } else {
                TreeNode* predecessor = current->left;
                while (predecessor->right != NULL && predecessor->right != current) {
                    predecessor = predecessor->right;
                }

                if (predecessor->right == NULL) {
                    predecessor->right = current;
                    current = current->left;
                } else {
                    predecessor->right = NULL;
                    count++;
                    if (count == k) {
                        kthSmallest = current->val;
                    }
                    current = current->right;
                }
            }
        }

        return kthSmallest;
    }