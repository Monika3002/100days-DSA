#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>ans;
        int len=0;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])==st.end()){
                st.insert(nums[i]);
                nums[len]=nums[i];
                len++;
            }
            else{
                nums[i]=0;
            }
            
        }
        return len;
    }
};
int main(){
    vector<int> nums = {1,1,2};
    Solution s;
    cout<<s.removeDuplicates(nums);
}
