#include<iostream>
#include<queue>
using namespace std;

void PrintQueueInReverse(queue<int> q1){

   if(q1.empty()){
    return;
   }
   int temp = q1.front();
   q1.pop();
   PrintQueueInReverse(q1);
   cout<<temp<<endl;

}

void PrintQueue(queue<int> q1){

    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
}

int main(int argc, char const *argv[]){
    
    return 0;
}