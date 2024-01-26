#include <iostream>
#include <vector>

using namespace std;
class MinHeap {
private:
    vector<int> heap;

public:
    MinHeap() {}

    void insert(int value) {
        heap.push_back(value);
        int index = heap.size() - 1;
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (heap[index] < heap[parentIndex]) {
                swap(heap[index], heap[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }
void deleteMin() {
        if (heap.empty()) {
            cout << "Heap is empty. Cannot delete." << endl;
            return;
        }

        heap[0] = heap.back();
        heap.pop_back();
        int index = 0;
        while (true) {
            int leftChild = 2 * index + 1;
            int rightChild = 2 * index + 2;
            int smallest = index;
            if (leftChild < heap.size() && heap[leftChild] < heap[smallest]) {
                smallest = leftChild;
            }
            if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
                smallest = rightChild;
            }
            if (smallest != index) {
                swap(heap[index], heap[smallest]);
                index = smallest;
            } else {
                break;
            }
        }
    }
    void levelOrderTraversal() {
        for (int i = 0; i < heap.size(); ++i) {
            cout << heap[i] << " ";
        }
    }
};

int main() {
    MinHeap minHeap;
    minHeap.insert(77);
    minHeap.insert(3);
    minHeap.insert(10);
    minHeap.insert(10);
    minHeap.insert(0);
    minHeap.insert(2);
    
    cout << "level order triversal without deletion: ";
    minHeap.levelOrderTraversal();
    minHeap.deleteMin();
    cout << "level order triversal after deletion: ";
   
   minHeap.levelOrderTraversal();
    return 0;
}
