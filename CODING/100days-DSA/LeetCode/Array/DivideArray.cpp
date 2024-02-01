#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans_index=0;
        for(int i=0;i<n;i+=3){
            if(i+2< n && nums[i+2]-nums[i]<=k ){
                ans.push_back({nums[i],nums[i+1],nums[i+2]});
                ans_index++;
            }
            else{
                ans.clear();
                return ans;
            }
        }
        return ans;
    }
};
int main(){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    int k=3;
    Solution sol;
    vector<vector<int>>ans=sol.divideArray(nums,k);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}