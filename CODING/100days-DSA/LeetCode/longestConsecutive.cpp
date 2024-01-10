#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
    int n = nums.size();
    if (n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;
    
    for (int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }

    //Find the longest sequence:
    for (auto it : st) {
        //if 'it' is a starting number:
        if (st.find(it - 1) == st.end()) {
            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;

    }
};
int main(){
    Solution s;
    vector<int> nums={100,4,200,1,3,2};
    int ans=s.longestConsecutive(nums);
    cout<<ans<<endl;
    return 0;
}