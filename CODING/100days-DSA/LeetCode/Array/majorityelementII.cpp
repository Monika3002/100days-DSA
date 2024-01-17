#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int cnt1=0,cnt2=0;
    int ele1=INT_MIN;      
    int ele2=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(cnt1==0 && ele2!=nums[i]){
            cnt1=1;
            ele1=nums[i];
        }
        else if( cnt2==0 && ele1!=nums[i]){
            cnt2=1;
            ele2=nums[i];
        }
        else if(ele1==nums[i]) cnt1++;
        else if(ele2==nums[i]) cnt2++;
        else{
            cnt1--;cnt2--;
        }
    }      
    vector<int>ls;
    cnt1=0;cnt2=0;
    for(int i=0;i<n;i++){
        if(ele1==nums[i])cnt1++;
        if(ele2==nums[i])cnt2++;
    }

    if(cnt1>n/3)ls.push_back(ele1);
    if(cnt2>n/3)ls.push_back(ele2);

    return ls;

   
           
    }
};
int main(){
    Solution s;
    vector<int> nums={1,1,1,3,3,2,2,2};
    vector<int> ans=s.majorityElement(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}