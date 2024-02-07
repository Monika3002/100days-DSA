#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string &S, string &T) {
        if(S.size() != T.size()) {
            return false;
        }
        vector<int> freq(26, 0);
        for(int i = 0; i < S.size(); i++) {
            freq[S[i] - 'a']++;
            freq[T[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0)
                return false;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<bool> used(strs.size(), false);
        for(int i = 0; i < strs.size(); i++) {
            if(used[i]) continue;
            vector<string> temp;
            for(int j = i; j < strs.size(); j++) {
                if(isAnagram(strs[i], strs[j])) {
                    temp.push_back(strs[j]);
                    used[j] = true;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = s.groupAnagrams(strs);
    for(auto i : ans) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}