#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) {
            if (i + k <= n) {
                reverse(s.begin() + i, s.begin() + i + k);
            } else {
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};
int main(){
    string s="abcdefg";
    int k=2;
    Solution sol;
    cout<<sol.reverseStr(s,k);
    return 0;
}