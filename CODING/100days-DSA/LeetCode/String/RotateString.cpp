#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   
    bool rotateString(string s, string goal) {
        // string ans;
        for(int i=0;i<s.size();i++){
            reverse(s.begin(),s.end());
            reverse(s.begin(),s.end()-1);
         
            if(s==goal){
                return true;
            }
            
        }    
            
        return false;
        
    }
};
int main(){
    Solution s;
    string s1="abcde";
    string s2="cdeab";
    cout<<s.rotateString(s1,s2);
    return 0;
}