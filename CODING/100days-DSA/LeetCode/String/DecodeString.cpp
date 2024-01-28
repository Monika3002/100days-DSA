
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        string result;
        for(int i=0;i<s.size();i++){
            if(s[i]!=']'){
                result.push_back(s[i]);
            }
            else{
                string str="";
                while(!result.empty() && result.back()!='['){
                    str.push_back(result.back());
                    result.pop_back();
                }
                result.pop_back();
                reverse(str.begin(),str.end());

                string nums="";
                while(!result.empty() && result.back()>='0' && result.back()<='9'){
                    nums.push_back(result.back());
                    result.pop_back();
                }
                reverse(nums.begin(),nums.end());
                int nums_length=stoi(nums);
                while(nums_length){
                    result+=str;
                    nums_length--;
                }
            
            }

        }
        return result;
    }
};
int main(){
    string s="3[a2[c]]";
  
    Solution sol;
    cout<<sol.decodeString(s);
    return 0;
}