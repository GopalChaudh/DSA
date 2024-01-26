#include <iostream>

// Define a singly linked list structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseKNodes(ListNode* head, int k) {
    if (!head || k == 1) {
        return head;
    }

    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;
    ListNode* curr = head;
    int count = 0;

    // Count the number of nodes in the linked list
    while (curr) {
        curr = curr->next;
        count++;
    }

    while (count >= k) {
        curr = prev->next;
        for (int i = 1; i < k; i++) {
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }
        prev = curr;
        count -= k;
    }

    // If there are remaining nodes (less than k), reverse them
    if (count > 0) {
        curr = prev->next;
        for (int i = 1; i < count; i++) {
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }
    }

    return dummy->next;
}

// Function to print a linked list
void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        std::cout << curr->val << " -> ";
        curr = curr->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8
    ListNode* head = new ListNode(1);
    ListNode* current = head;
    for (int i = 2; i <= 8; i++) {
        current->next = new ListNode(i);
        current = current->next;
    }

    int k = 3; // Number of nodes to reverse

    std::cout << "Original Linked List: ";
    printList(head);

    // Reverse every k nodes
    head = reverseKNodes(head, k);

    std::cout << "Reversed Linked List (k = " << k << "): ";
    printList(head);

    return 0;
}
