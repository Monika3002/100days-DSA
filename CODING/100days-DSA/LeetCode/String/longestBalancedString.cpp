#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int a = 0, b = 0, ans = 0,i=0,n=s.length();
        while(i<n){
            while(i<n&&s[i]=='0'){
                a++;
                i++;
            }
            while(i<n&&s[i]=='1'){
                b++;
                i++;
            }
            ans = max(ans,min(a*2,b*2));
            a = 0,b=0;
        }
        return ans;
    }
};