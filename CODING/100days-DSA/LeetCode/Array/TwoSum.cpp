#include <unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Declare an unordered map to store the numbers and their indices
        unordered_map<int, int> mp;
       
        // Loop through the array
        for(int i = 0; i < nums.size(); i++){
            // Check if the complement of the current number exists in the map
         //the mp.find() it gives true and false or 1 and 0 if it find or not find the key in the map
         //and mp.end() gives imaginary postion in map i,e=0
            if(mp.find(target - nums[i]) == mp.end())
                // If not find , add the current number and its index to the map
                mp[nums[i]] = i;
            else
                // If find, return the indices of the current number and its complement
                return {mp[target - nums[i]], i};
        }
 
        // If no pair is found, return {-1, -1} as a default value
        return {-1, -1};
    }
};
int main(){
    Solution s;
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> ans=s.twoSum(nums,target);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}