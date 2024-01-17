// Given a sorted array of distinct integers and a target value, return the index if the target is found. 
// If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:
// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:
// Input: nums = [1,3,5,6], target = 7
// Output: 4
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:

    int searchInsert(vector<int>& nums, int target) {
    int Start=0;
    int End=nums.size();
    int mid;
    if(target>nums[End-1]){
        return End;
    }
    while(Start<=End){
         mid=Start + (End-Start)/2;
        if(nums[mid] ==target){
            return mid;
        }
       else if(target<nums[mid]){
            End=mid-1;
        }
        else{
            Start=mid+1;
        }
    }
    return Start;
    }
};
int main(){
    vector<int> nums={1,3,5,6};
    int target=0;
    Solution s;
    cout<<s.searchInsert(nums,target);
    return 0;
}