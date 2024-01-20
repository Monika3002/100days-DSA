#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class Solution {
public:
    bool canSortBySwaps(vector<int>& nums) {
        if (is_sorted(nums.begin(), nums.end())) {
            return true;
        }

        vector<pair<int, int>> bitCount(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            bitCount[i] = {__builtin_popcount(nums[i]), i};
        }
        stable_sort(bitCount.begin(), bitCount.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (bitCount[i].second != i) {
                return false;git 
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {8, 4, 2, 30, 15};
    cout << (solution.canSortBySwaps(nums1) ? "true" : "false") << endl;  // Output: true

    vector<int> nums2 = {3, 16, 8, 4, 2};
    cout << (solution.canSortBySwaps(nums2) ? "true" : "false") << endl;  // Output: false

    vector<int> nums3 = {1, 2, 3, 4, 5};
    cout << (solution.canSortBySwaps(nums3) ? "true" : "false") << endl;  // Output: true

    return 0;
}