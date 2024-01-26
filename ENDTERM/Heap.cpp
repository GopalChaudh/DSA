#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(){
    priority_queue<int,vector<int>,greater<int> > minHeap;
    minHeap.push(20);
    minHeap.push(40);
    minHeap.push(60);
    minHeap.push(10);
    minHeap.push(13);
    while(!minHeap.empty()){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
}