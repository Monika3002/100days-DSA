#include<iostream>
#include<math.h>
using namespace std;
int main(){
//     int n;
    // cin>>n;
//   DECIMAL TO BINARY
//     int i=0;
//     float binary =0;
//     while(n!=0){
//         int bit = n & 1;
//         binary = (bit * pow (10,i)+binary);
//         n=n>>1;
//         i++;
//     }
//     cout<<"Binary is "<< binary<<endl;

//how to convert negative number in binary

    int arr[32]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int comp[32]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int  two[32]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
    int i=31;
    while(n!=0){
        arr[i]=(n&1);
    //converting in 1's compliment
        if(arr[i]==0){
        comp[i]=1;
        }
        else{
            comp[i]=0;
        }
        n=n>>1;
        i--;


    }
//     //    arr[31]=arr[31]+1;
//     int i = arr.size() - 1;
//     int j = two.size() - 1;

//     while (i >= 0 || j >= 0 || carry != 0) {
//         int sum = carry;
//         if (i >= 0) {
//             sum += num1[i];
//             i--;
//         }
//         if (j >= 0) {
//             sum += num2[j];
//             j--;
//         }

//         result.insert(result.begin(), sum % 2);
//         carry = sum / 2;
//     }
//         comp[31]=comp[31]+1;
       
//         for(int i=0;i<32;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//         for(int i=0;i<32;i++){
//             cout<<comp[i]<<" ";
//         }

// BINARY TO DECIMAL
    int n;
    cin>>n;
    int i=0,ans=0;
    while(n!=0){
        int bit = n % 10 ;
        n=n/10;
        ans=ans+(bit*(pow(2,i)));
        i++;
        }
    cout<<ans<<endl;

}