#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// burhte force approach

//   int countPaths(int i,int j,int n,int m)
//     {
//         if(i==(n-1)&&j==(m-1)) return 1;
//         if(i>=n||j>=m) return 0;
//         else return countPaths(i+1,j,n,m)+countPaths(i,j+1,n,m);
//     }
//     int uniquePaths(int m, int n) {
//        return countPaths(0,0,m,n);
    
//     }

// dynamic programing apporoach
//   int countPaths(int i,int j,int n,int m,vector<vector<int>>&dp)
//     {
//         if(i==(n-1)&&j==(m-1)) return 1;
//         if(i>=n||j>=m) return 0;
//         if(dp[i][j]!=-1) return dp[i][j];
//         else return countPaths(i+1,j,n,m,dp)+countPaths(i,j+1,n,m,dp);
//     }
//     int uniquePaths(int m, int n) {
//        return countPaths(0,0,m,n,dp);
//     }

// optimized approach
int uniquePaths(int m, int n) {
            int N = n + m - 2;
            int r = m - 1; 
            double res = 1;
            
            for (int i = 1; i <= r; i++)
                res = res * (N - r + i) / i;
            return (int)res;
    }
int main(){
    cout<<uniquePaths(3,7);
    return 0;
}