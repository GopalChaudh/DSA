#include<iostream>

using namespace std;

class heap{
    public:
     int arr[100];
    int size = 0;
    heap(){
         arr[0] = -1;
         size = 0;
    }
    void insert(int x){
        size++;
        int index = size;
        arr[index] = x;

        while(index >1){
            int parent = index/2;
            if(arr[index] > arr[parent]){
                swap(arr[index] ,arr[parent]);
                index = parent;
            }else{
                break;
            }

        }
        

    }
    void print(){
        for (int i = 1; i <= size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    void deleteHeapNode(){
        if(size ==0){
             return ;
             }
        arr[1] = arr[size];
        size--;
        int i=1;


        while(i<size){

        int left = 2*i;
        int right = 2*i+1;
        if(left < size && arr[left] > arr[i]){
            swap(arr[left] , arr[i]);
            i = left;
        }
        else if(right < size && arr[right] > arr[i]){
            swap(arr[right] , arr[i]);
            i=right;
        }else{
            return ;
        }

        }
    }
};

void heapyfy(int *arr,int n,int i){
    int left = 2*i;
    int right = 2*i+1;
    int largest = i;

    if(left<=n && arr[largest] <arr[left]){
        largest = left;
    }
     if(right<=n && arr[largest] <arr[right]){
        largest = right;
    }

    if(i !=largest){
        swap(arr[largest],arr[i]);
        heapyfy(arr,n,largest);
    }
}

int main(){
    // heap h1;
    // h1.insert(50);
    // h1.insert(55);
    // h1.insert(53);
    // h1.insert(52);
    // h1.insert(54);
    // h1.print();
    // h1.deleteHeapNode();
    // h1.print();
    int arr[8] = {-1,32, 15, 20, 30, 12, 25, 16};
    int n = 7;
    for(int i = n/2;i>0;i--){

    heapyfy(arr,n,i);

    }
       for (int i = 1; i <= n; i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}