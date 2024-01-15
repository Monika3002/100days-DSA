#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
       for (int i = 0, k = 0; i < nums.size(); ++i)
            if (nums[i] > nums[(i + 1) % nums.size()] && ++k > 1)
                return false;
        return true;

       }
    };
    int main(){
        vector<int> nums = {1,1,0,1,1,1};
        Solution s;
        cout<<s.check(nums);
    }