#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;int r=n-1;
        int res=0;
        int leftmax=0;
        int rightmax=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=leftmax){
                    leftmax=height[l];
                }
                else{
                    res+=leftmax-height[l];
                }
                l++;
            }
            else{
                if(height[r]>=rightmax){
                    rightmax=height[r];
                }
                else{
                    res+=rightmax-height[r];
                }
                r--;
            }
        }
        return res;
        
    }
};
int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution s;
    cout<<s.trap(height);
}