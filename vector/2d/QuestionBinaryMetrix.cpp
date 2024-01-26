#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<bool> > matrix(n,vector<bool>(m,false));
    for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){
        if(!((i+j)&1)){
            matrix[i][j] = true;
        }

    }
    }
    for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){
       cout<<matrix[i][j]<<" ";

    }
    cout<<endl;
    }
    return 0;
}