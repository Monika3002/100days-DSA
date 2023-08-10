#include<iostream>
#include<math.h>
using namespace std;

int reverse(int n){
    int ans =0;
    int i=0;
    while(n!=0){
     int rem =n%10;
     n/=10;
     ans=(ans*pow(10,i))+rem;
     i++;
    }
    return ans;   
}
long long power_of_reverse(int n, int p){
    long long ans;
    if(p==0){
        return 1;
    }
    if(p%2==0){
        ans=power_of_reverse(n,p/2);
        ans=ans*ans;
    }
    else{
        ans=n*power_of_reverse(n,p-1);
    }
    return ans%1000000007;
}

int main(){
    long long  n;
    cin >> n;
    long long r=reverse(n);
    cout << power_of_reverse(n,r) << endl;
}
