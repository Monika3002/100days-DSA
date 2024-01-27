// (=40,)=41,[=91,]=93,{=123,}=125
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>mp;
        mp[')']='(';
        mp[']']='[';
        mp['}']='{';
        stack<char>st;
        for(int i=0;i<s.size();i++){
           if(s[i]==')' || s[i]==']' ||s[i]=='}'){
               if(!st.empty() && st.top()==mp[s[i]]){
                   st.pop();
               }
               else{
                   return false;
               }
           }
           else{
               st.push(s[i]);
           }
        }
        return st.empty();
    }
};
int main(){
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.isValid(s);
    return 0;
}