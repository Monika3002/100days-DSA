#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
    
public:
    int count1=0;
bool isPalindrome(string s,int i,  int j){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
            count1++;
        }
        i++;
        j--;
    }
    return true;
}

    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(isPalindrome(s,i,j)){
                    count++;
                    if(count1==2){
                        count1=0;
                        break;
                    }
                }
            }
        }
        return count;        
    }
};
int main(){
    Solution s;
    cout<<s.countSubstrings("abc");
    return 0;
}