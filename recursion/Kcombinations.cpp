#include<iostream>
#include<vector>

using namespace std;
// O(2^k) complexicy
class Solution {
public:
void solve(vector<int> &list,vector<int> output, int index ,int k,vector<vector<int> > &ans){
        if(output.size() == k){
            ans.push_back(output);
            return ;
        }
        if(index == list.size()){
            return;
        }
        //exclude
        solve(list,output,index+1,k,ans);
        int ele = list[index];
        output.push_back(ele);

        solve(list,output,index+1,k,ans);
        

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> list(n,0);
        vector<vector<int> > ans;
        vector<int> output;
        for(int i=1;i<=n;i++){
            list[i-1] = i;
        }
        solve(list,output,0,k,ans);
        return ans;
    }
};


int main(){
    Solution s1;
    int n,k;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of k: ";
    cin>>k;
    vector<vector<int> > ans = s1.combine(n,k);
    for(int i=0;i<n;i++){
        cout<<"[ ";
        for(int j=0;j<k;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }


    return 0;
}