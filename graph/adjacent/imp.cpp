#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph
{
    unordered_map<int,list<int>> adj;

public:
    void additem(int u,int v,int type){
        adj[u].push_back(v);
        if(type == 0) // undirected 
        {
            adj[v].push_back(u);

        }else //directed
        {
            NULL;
        }


    }
    void printMap(){
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
    graph g;
    int total_node;
    int total_edge;
    // cout<<"enter the no. of nodes: ";
    // cin>>total_node;
    cout<<"enter the no. of edges: ";
    cin>>total_edge;
    for(int i=0;i<total_edge;i++){
        int u,v;
        cin>>u>>v;
        g.additem(u,v,0);

    }
    g.printMap();

    return 0;
}