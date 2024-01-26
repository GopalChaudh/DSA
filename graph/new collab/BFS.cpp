#include<iostream>
#include<list>
using namespace std;


class Graph{
    int v;
    list<int> * adj;
    public:
    Graph(int v);
    void addEdge(int v,int w);
    void BFS(int s);
    void print();
};
Graph::Graph(int v){
    this->v = v;
    adj = new list<int>[v];
}
void Graph::addEdge(int v,int w){
    adj[v].push_back(w);
}
void Graph::BFS(int s){
    bool *visited = new bool[v];
    for(int i=0;i<v;i++)
        visited[i] = false;

    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;

    while(!queue.empty()){
        s = queue.front();
        cout<<s<<" ";
        queue.pop_front();
       for(i = adj[s].begin(); i != adj[s].end();i++){
            if(!visited[*i]){
                visited[*i] = true;
                queue.push_back(*i);

            }
       }
    }


}

int main(){
    int V,vleft,vright,temp;
    cout<<"Enter the vertex : ";
    cin>>V;
    Graph g(V);
    cin>>vleft>>vright;
    while(vleft != -1 && vright !=-1){
        g.addEdge(vleft,vright);
        cin>>vleft>>vright;

    }
    cin>> temp;
    cout<<" BFS: "<<endl;
    g.BFS(temp);
}