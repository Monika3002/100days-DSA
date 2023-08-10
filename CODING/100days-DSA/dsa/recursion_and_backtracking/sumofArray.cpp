#include<iostream>
#include<array>
using namespace std;
int sum(int arr[], int size){
    if(size<0){
        return 0;
    }
    else{
        return arr[size]+ sum(arr , size-1) ;

    }
}
int main(){
    // array<int,5>arr = {0,1,2,3,4};
    int arr[5]={0,1,2,3,4};
    int size= sizeof(arr)/sizeof(arr[0])-1;
    int ans = sum(arr,size);
    cout << ans << endl;
}