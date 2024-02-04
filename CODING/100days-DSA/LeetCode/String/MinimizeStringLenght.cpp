
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>ans;
        for(int i=0;i<s.size();i++){
           if(ans.find(s[i])!=ans.end()){
           }
            else{ 
                ans.insert(s[i]);
            }
        }
        return ans.size();
        
    }
};
int main(){
Solution s;
string str="geeksforgeeks";
cout<<s.minimizedStringLength(str);
}