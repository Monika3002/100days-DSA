#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    vector<int> grayCode(int n) {
       vector<int>ans;
       int last=pow(2,n);
       for(int i=0;i<last;i++){
           ans.push_back(i^(i/2));
       }
       return ans;
    }
};
int main(){
    Solution s;
    vector<int>ans=s.grayCode(2);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}