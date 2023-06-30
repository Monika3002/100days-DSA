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

// int power(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int value=1;
//     for(int i=1;i<=num2;i++)
//     {
//         value=value*num1;
//     }
//     return value;
// }
// int main(){
//     int ans =power();
//     cout << ans <<endl;
// }

// CODE FOR ODD EVEN
//   bool isEven(int n){
//     if(n % 2 == 0 ){
//         return 1;
//     }
//     e
//     return 0;
//   }

//   int main (){
//     int n;
//     cin >> n;
//     if ( isEven(n) ){
//         cout << "Even Number " <<endl;
//     }
//     else {
//         cout << "Odd Number " <<endl;
//        }
//   }

// CODE FOR NCR
// int factorial(int x){
//     int fact=1;
//     for(int i = 1 ; i<= x ; i++){
//         fact*=i;
//     }
//     return fact;
// }
// int nCr (int n ,int r){
//     int ans =factorial(n)/(factorial(r)*factorial(n-r));
//     return ans;
// }
// int main (){
//     int a ,b;
//     cin >> a >> b;
//     int value = nCr(a,b);
//     cout << value <<endl;
// }


// PRINT COUNTING
// void counting(int n){
//     for (int i = 1 ;i <= n ; i++){
//         cout << i<< " ";
//     }
// }

// int main(){
//     int num;
//     cin >> num;
//     counting(num);
// }


//  PRIME NUMBER

// bool isPrime(int n){
//     for(int i =2 ; i<n ; i++){
//         if( n % i == 0){
//             return  0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int num;
//     cin >> num;
//     if( num > 1){
//           if(isPrime(num)){
//             cout << "Prime Number " << endl;
//           }
//           else{
//             cout << "Not Prime Number "<< endl;
//           }

//     }
//     else{
//         cout << "Not Prime Number " << endl;
//     }
// }
// AP(NTH TERM)
// int nthTerm(int a ,int d,int n){
//     int An = a +(n-1)*d;
//     return An;
// }
// int main(){
//     int a,d,n;
//     cin >> a >> d >> n ;
//     cout << nthTerm(a,d,n) << endl;
// }

// SET OF 0NE S bit
// int set1bits(int x){
//     int count=0;
//     while(x!=0){
//         if( x & 1 == 1){
//             count++;
//         }
//         x=x >> 1;
//     }
//     return count;
// }
// int main(){
//     int a,b;
//     cin >> a >>b;
//     int ans = set1bits(a)+set1bits(b);
//     cout << ans << endl;
// }

// FIBONAANCI  
// void fabonaaci(int next,int n){
//     int i=0;
//     int one=0;
//     while(i<n){
//        int add=one+next;
//         cout << add << " ";
//         i++;
//         one=next;
//         next=add;
//     }

// }

// int main (){
//     int a,n;
//     cin >> a >>  n;
//     fabonaaci(a,n);
// }