#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int len=0;
        for(int i=0;i<nums.size();i++){
            // int len=0;
            if(nums[i]==1){
                len++;
                ans=max(len,ans);
            }
            else{
                len=0;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> nums = {1,1,0,1,1,1};
    Solution s;
    cout<<s.findMaxConsecutiveOnes(nums);
}