#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string temp;

    for (auto& x : s) { 
    
        x = tolower(x); 
    } 
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){

            temp+=s[i];
        }
        
            
    }
    int e=temp.size()-1;
    int st=0;
    cout<<temp;
    while(st<e){
        if(temp[st]!=temp[e]){
            return false;
        }
        st++;
        e--;
       
    }
    return true;
    }
};
int main(){
    
}