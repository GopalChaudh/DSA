#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[]){
    vector<vector<int>> vec;
    //
    int n;
    cin>>n;
    // vector<vector<int> > metrix(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        vec.push_back(vector<int>());
        for(int j=0;j<n;j++)
            vec[i].push_back(2*(i+j));
            }
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++){
            cout<<vec.at(i).at(j)<<" ";}
    cout<<endl;
    }
    return 0;
}