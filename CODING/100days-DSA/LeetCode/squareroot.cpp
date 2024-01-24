#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int s=1;
        long end=x;
        long mid=-1;
        while(s<=end){
           mid=s+(end-s)/2;
            long long sqaure=mid*mid;
            if(sqaure<x){
                s=mid+1;
            }
            else if(sqaure==x){
                return mid;
            }
            else{
                end=mid-1;
            }
            mid=s+(end-s)/2;
        }
        return end;
        
    }
};
int main(){
    Solution s;
    cout<<s.mySqrt(2147395599);
    return 0;
}