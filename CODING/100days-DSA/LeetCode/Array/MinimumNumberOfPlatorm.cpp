#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n); //sorting in array takes starting and eding instead of pointer
    sort(dt,dt+n);
    int i=1;
    int j=0;
    int ans=1;
    int cnt=1;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            cnt++;
            i++;
        }
        else{
            cnt--;
            j++;
        }
        ans=max(ans,cnt);

    }   
    return ans;
}
int main(){
    int at[]={900,940,950,1100,1500,1800};
    int dt[]={910,1200,1120,1130,1900,2000};
    cout<<calculateMinPatforms(at,dt,6);
}