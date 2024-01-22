#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int val=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && val!=0){
                return val;
            }
            else if(s[i]!=' ' ){
                val++;
            }
            else if (s[i]==' '&& val==0){
                continue;
            }
        }
        
        return val;
        
    }
};
int main(){
    Solution s;
    cout<<s.lengthOfLastWord("Hello World");
}