#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    double myPow(double x, int n) {
        if(n==0){
            return 1.0;
        }
        if(n>0){
            return x * myPow(x,n-1);
        }
       else{
            return (1/x) *myPow(x,n+1);
        }
        
    }
};
int main(){
    Solution s;
    cout<<s.myPow(0.00001,2147483647);
    return 0;
}