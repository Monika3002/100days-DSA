#include<iostream>
using namespace std;
int main(){
    // int a,b;
    // char a;
    // cout<<"Enter the value of a and b :\n";
    // cin>>a>>b;
    // a=cin.get();  //it takes  charater as a input
    // cout<<a<<endl;
    // if(a>0)
    // {
        // cout<<"positive";
    // }
    // if(a>b){
        // cout <<"A is greater than B \n";
    // }
//     else if(a<b){
//         cout<<"A is smaller than B \n";;
//     }
//     else{
//         cout<<"A is equals to B";
//     }

// pratice question 1
    // int a =9;
    // if(a==9){
    // cout<<"NINEY";
    // }
    // if(a>0){
    //     cout<<"POSITIVE";
    // }
    // else{
    //     cout<<"NEGATIVE";
    // }
    //OUTPUT is NINEYPOSITIVE

// practice question 2
    // int a=4;
    // int b=3;
    // if((a=3)==b){
    //     cout<<a;
    // } 
    // else{
    //     cout<<a+1;
    // }
//OUTPUT is 3

// practice question 3
    // int a=24;
    // if (a>20){
    //     cout<<"LOVE";
    // }
    // else if (a==24){
    //     cout<<"LOVELY";
    // }
    // else{
    //     cout<<"BABBAR";
    // }
    // cout<<a;
//OUTPUT is LOVE24

// homework questions
// to check whether it is a uppercase aor lowercase or numeric
    // char character;
    // cout<<"Enter a character here : ";
    // int num =cin.get();
    // character = num;  //tyypecasting here
    // cout<<"Input character is "<<character<<endl;
    // if (num>=65 && num<=90){
    //     cout<<"Character is in Upper case .\n";
    // }
    // else if(num>=97 && num<=122){
    //     cout<<"Character is in Lower case .\n";
    // }
    // else if(num>=48 && num<=57){
    //     cout<<"Character is numeric case .\n";
    // }
    // else{
    //     cout<<"Character is in different case .\n";
    // }



//LOOPS
    // int n;
    // cout<<"Enter a number here: ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i++;
    // }
// sum of all number upto n
    // int n;
    // cout<<"Enter a number here :";
    // cin>>n;
    // int i=0;
    // int sum =0;
    // while(i<=n){
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<sum;
    
    // without loop
    // int sum =(n*(n+1))/2;
    // cout<<sum;

//sum of all even numbers from 1 to n
    // int i=2;
    // int sum=0;
    // while(i<=n){
    //     sum=sum+i;
    //     i=i+2;
    // }
    // cout<<sum;
// sum of first n even numbers is
    // int a=2;
    // int d =2;
    // int sum =(n*(2*a +(n-1)*d))/2;
    // cout<<sum;

// fahrenheit to celsius converter
    // float fh;
    // cout <<"Enter the value in fahrenheit to convert into celsius  : ";
    // cin>>fh;
    // float cel=((fh-32)*5)/9;
    // cout<<"Given fahrenhait temperature value in celsius is "<<cel<<" degree";    

// PRIME NUMBER
    // int n;
    // cout<<"enter a number :";
    // cin>>n;
    // int flag=0;
    // if(n>1){
    //     int i=2;
    //     while(i<n){
    //         if(n%i==0){
    //             cout<<n<<" is not prime for "<<i<<endl;
    //             flag=1;
    //         }
    //         else{
    //             cout<<n<<" is prime for "<<i<<endl;
    //         }
    //         i++;
    //     }
    // }
    // else{
    //     cout<<n<<" is a composite number and it is NOT a PRIME NUMBER";
    // }
    // if(flag!=1){
    //     cout<<n<<" is a PRIME NUMBER ";
    // }
    // else{
    //     cout<<n<<" is NOT a PRIME NUMBER ";
    // }

//PATTERNS
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}