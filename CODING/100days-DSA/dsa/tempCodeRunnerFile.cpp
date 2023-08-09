#include<iostream>
using namespace std;
// code  for finding the power
// int power(int num1,int num2){
//     int value=1;
//     for(int i=1;i<=num2;i++){
//         value=value*num1;
//         }
//     return value;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans =power(a,b);
//     cout << ans <<endl;
// }

//  another way of writing this code

int power(){
    int num1,num2;
    cin>>num1>>num2;
    int value=1;
    for(int i=1;i<=num2;i++){