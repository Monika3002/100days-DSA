#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int ind=haystack.find(needle);
        if(ind!=string::npos) return ind;
        return -1;
        
        
    }
};
int main(){
    Solution s;
    cout<<s.strStr("hello","ll");
    return 0;
}