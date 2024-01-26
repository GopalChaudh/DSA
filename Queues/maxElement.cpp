#include<iostream>
#include<queue>
using namespace std;

int max(queue<int> s1){
    int maxele = s1.front();
    s1.pop();
    while (!s1.empty())
    {
       (s1.front() > maxele) ? maxele = s1.front() : NULL;
       s1.pop();
    }
    return maxele;
    
}

int main(int argc, char const *argv[]){
    
    return 0;
}