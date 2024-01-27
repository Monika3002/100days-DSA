#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int>v1(128,-1);
        vector<int>v2(128,-1);
        for(int i=0;i<s.size();i++){
            if(v1[s[i]]!=v2[t[i]]){
                return false;
            }
            else{
                v1[s[i]]=v2[t[i]]=i;
            }
        }
   
   
    return true;
    
        
    }
};
int main() {
    string s,t;
    cin>>s>>t;
    Solution sol;
    cout<<sol.isIsomorphic(s,t);
    return 0;
}
