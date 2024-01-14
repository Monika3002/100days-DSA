#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
	vector<vector<int>>ans;
	for(int i=0;i<n;i++){
		if(i>0 && nums[i]==nums[i-1]) continue;
		int j=i+1;
		int x=n-1;
		while(j<x){
			long long sum=nums[i]+nums[j];
			sum+=nums[x];
			if(sum==0){
				vector<int>temp={nums[i],nums[j],nums[x]};
				ans.push_back(temp);
			while(j<x && nums[j]==nums[j+1]) j++;
			while(j<x &&nums[x]==nums[x-1]) x--;
				j++;
				x--;
			}
			else if(sum>0){
				x--;
			}
			else{
				j++;
			}
		
		}
	}
	return ans;
}

};
int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    Solution s;
    vector<vector<int>> ans = s.threeSum(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}