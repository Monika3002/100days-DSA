#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
      unordered_map<int,int>mpp;
      int maxi=0;
      int sum=0;
      int n=arr.size();
      for(int i=0;i<n;i++){
          sum=sum+arr[i];
          if(sum==0){
            maxi=i+1;
          }
          else if(mpp.find(sum)!=mpp.end()){
              maxi=max(maxi,i-mpp[sum]);
          }
          else{
            mpp[sum]=i;
          }
      }
    return maxi;

}
int main() {
    int n;
    cin >> n;
    vector < int > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << LongestSubsetWithZeroSum(arr);
    return 0;
}