#include <iostream>

using namespace std;



class heap{
    public:
        int arr[100];
        int size;
        
        heap()
        {
            arr[0]= -1;
            size = 0;
        }
        void insert(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;
            
            while(index>1){
                int parent = index/2;
                
                if(parent >= 1 && arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                    
                }
                else{
                    return;
                }
            }
            
        }
        //heapyfy
       void heapify(int i){
        int left = i*2;
        int right = i*2+1;
        int largest = i;

        if(left <=size && arr[left] > arr[largest]){
            largest = left;
        }
        if(right <=size && arr[right] > arr[largest]){
            largest = right;
        }

        if(i != largest){
            swap(arr[i],arr[largest]);
            heapify(largest);
        }
}
        //delete
        void deleteHeap(){
            arr[1] = arr[size];
            size = size -1;
            heapify(1);
        }
        
        void print(){
            for(int i=1; i<=size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
    int main(){
        int n, val;
        cin>>n;
        heap h;
        for(int i=0; i<n; i++){
            cin>>val;
            h.insert(val);
        }
        h.print();
        h.deleteHeap();
        h.print();
    }