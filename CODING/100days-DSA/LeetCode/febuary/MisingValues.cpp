#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();

        int totalSum=n*(n+1)/2;
        int arraySum=0;
        for(auto i:nums){
            arraySum+=i;
        }
        return totalSum-arraySum;
    }
};
int main(){
    Solution s;
    vector<int> nums={3,0,1};
    cout<<s.missingNumber(nums);
    return 0;
}