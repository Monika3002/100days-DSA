#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int a=count(nums.begin(),nums.end(),0);
        int b=count(nums.begin(),nums.end(),1);
        int c=count(nums.begin(),nums.end(),2);
        for(int i=0;i<n;i++){
            if(i<a){
                nums[i]=0;
            }else if(i<a+b ){
                nums[i]=1;
            }
            else {
                nums[i]=2;
            }
        }
        
        
    }
};
int main(){
    Solution s;
    vector<int> nums={2,0,2,1,1,0};
    s.sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}