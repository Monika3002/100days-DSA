#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
   int cnt=1;
    int n=nums.size();
    if(n==1){
        return nums[0];
    }
    sort(nums.begin(),nums.end());
   
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        if(cnt>n/2){
            return nums[i];
        }
    }
    return 1;
    }
    
};
int main(){
    Solution s;
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<s.majorityElement(nums);
    return 0;
}