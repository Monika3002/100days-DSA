#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) { 
       int maxi=INT_MIN; 
       int mini=INT_MAX; 
       
       int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            if(maxi<prices[i]-mini){
                maxi=prices[i]-mini;
            }
        }
       
        return maxi;
    }
};
int main(){
    Solution s;
    vector<int>array={7,5,5,3,6,4};
    cout <<s.maxProfit(array)<<endl;
}