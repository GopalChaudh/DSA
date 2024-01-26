#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;

class Graph
{
    unordered_map<int,list<int>> adj;

public:
    void insert(int u,int v,int type){
        adj[u].push_back(v);
        if(type == 0) // undirected 
        {
            adj[v].push_back(u);

        }else //directed
        {
            NULL;
        }


    }
    void print(){
        for(auto i: adj){
            cout<<i.first<<"-> ";
            for (auto j: i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};



int main(){
    int n;
    cin>>n;
    Graph g;
    for(int i=0;i<n;i++){
        int v,u;
        cin>> u,v;
        g.insert(u,v,0);
    }
    g.print();

    return 0;
}

// 0 1 
// 0 2
// 0 3
// 4 1
// 3 2