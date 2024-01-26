#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
void solve(vector<int> nums,int output,int index,vector<int> &ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums,output,index+1,ans);
    //include
    int ele = nums[index];
    output = output+ele;
    solve(nums,output,index+1,ans);
    }


    vector<int> subsets(vector<int>& nums) {
        vector<int> ans;
        int output=0;
        int index =0;
        solve(nums,output,index,ans);
        return ans;
    }
};

int main(){
    Solution s1 ;
    vector<int> nums;
    int n,k;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        nums.push_back(val);
    }
    cin>>k;
    vector<int> ans = s1.subsets(nums);
    sort(ans.begin(),ans.end());
    if(k>0 && k<=ans.size()){

    cout<<"k = "<<k<<" Largest Value: "<<ans[ans.size()-k]<<endl;
    }else{
        cout<<"index out of range"<<endl;
    }
    return 0;
}
//Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]