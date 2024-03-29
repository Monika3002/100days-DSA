#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int>mp(256,-1);
        int len=0;
        int left=0;
        int right=0;
        while(right<n){
            if(mp[s[right]]!=-1){
                left=max((mp[s[right]]+1),left);
            }
            mp[s[right]]=right;
            len=max(len,(right-left+1));
            right++;
        }
        return len;

    }
};
int main(){
    Solution s;
    string str="abcabcbb";
    int ans=s.lengthOfLongestSubstring(str);
    cout<<ans<<endl;
    return 0;
}