#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //         char ch='A'+n-i;
    //         while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // 4
    // D 
    // C D
    // B C D
    // A B C D


    // int  i=1;
    // while(i<=n){
    //     int space=n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int star=1;
    //     while(star<=i){
    //         cout<<"* ";
    //         star++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //          * 
    //         * * 
    //        * * *
    //       * * * *


//     int i=1;
//     while(i<=n){
//         int space=n-i;
//         while(space>0){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<j;
//             j++;
//         }
//         int k=i-1;
//         while(k>0){
//             cout<<k;
//             k--;
//         }
//         cout<<endl;
//         i++;
    
//     } 

    
//    1
//   121
//  12321
// 1234321

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int k=2*(i-1);
        while(k){
            cout<<"*";
            k--;;
        }
        //  k=i-1;
        // while(k){
        //     cout<<"*";
        //     k--;;
        // }
        int l=n-i+1;
        while(l>0){
            cout<<l;
            l--;
        }
        cout<<endl;
        i++;
        
    }
    
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

    
}