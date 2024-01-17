#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans=-1;
        for(int i=0;i<nums.size()-1;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<diff){
                    ans=sum;
                diff=abs(target-ans) ;
                };
            if(sum>target) k--;
            else j++; 
            }
        }
        

        return ans;
        
    }
};