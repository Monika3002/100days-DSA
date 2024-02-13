#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
bool isPalindrome(string &str){
    int n=str.size();
    if(n==1){
        return true;
    }
    int s=0;
    int end=n-1;
    while(s!=end){
        if(str[s]<str[end]){
            return  false;
        }
        s++;
        end--;
    }
    return true;
}

    string firstPalindrome(vector<string>& words) {
        int size=words.size();
        string ans="";
        for(int i=0;i<size;i++){
            if(isPalindrome(words[i])){
                return words[i];
                
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<string> words= {"cqllrtyhw","swwisru","gpzmbders","wqibjuqvs","pp","usewxryy","ybqfuh","hqwwqftgyu","jggmatpk"};
    cout<<s.firstPalindrome(words);
    return 0;
}