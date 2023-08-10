#include<iostream>
using namespace std;
int fab(int n){
    if(n==0){
        return 0;
    }
    else if(n==1 || n==2){
        return 1;
    }
    else{
        return fab(n-1)+fab(n-2);
    }
}

int main(){
    int n;
    cout << "Enter the value of n :" <<endl;
    cin >>n ;
    // for linear printing
    // for (int i = 0; i<=n ;i++){
    //   int series= fab(i);
    //   cout << series << " ";
    // }

    // for reverse series
    for (int i = n; i>=0 ; i--){
      int series= fab(i);
      cout << series << " ";
    }

}