#include <iostream>
using namespace std;

int main(){

    // switch case

    // int num=3;
    // char ch = '1' ;
    // switch ( ch ){
    //     case 1: cout << "Case one is executed "<< endl;
    //             break;
    //     case '1':switch (num) {
    //                case 3: cout << "nested switch case is executed "<<endl;
    //                break;
    //             }   
    //             cout << "case two is executed " << endl;
    //                 break;
    //     default: cout << "default case is executed " << endl;
    // }



    // CALCULATOR
    // int a,b;
    // char op;
    // cout << "Enter the value of a : " ;
    // cin >> a;
    // cout << "Enter the value of b : " ;
    // cin >> b;
    // cout << "Enter the operation between a and b : " ;
    // cin >> op;
    // switch ( op ){
    //     case '+' : cout <<"Addition of "<< a << " and " << b << " is " << a+b <<endl;
    //         break;
    //     case '-' : cout <<"Substraction of "<< a << " and " << b << " is " << a-b <<endl;
    //         break;
    //     case '*' : cout <<"Multiplication of "<< a << " and " << b << " is " << a*b <<endl;
    //         break;
    //     case '/' : cout <<"Divide of "<< a << " and " << b << " is " << a/b <<endl;
    //         break;
    //     case '%' : cout <<"Modular of "<< a << " and " << b << " is " << a%b <<endl;
    //         break;
    //     default : cout << "Enter a valid operation " <<endl;
    //         }


// NUMBER OF 100's ,50's,20's,10's and 1's notes required


    int n,note;
    cout << "Enter total rupees : ";
    cin >> n;
    cout << "Enter a value of note : ";
    cin >> note;
    int x = n / 100;
    n = n % 100;
    int y = n / 50;
    n = n % 50;
    int z = n / 20;
    n = n % 20;
    int a = n / 10;
    n = n % 10;
    int b = n / 1;
    n = n % 1;
    
    switch (note)
    {
    case 100 : 
        cout << "No. of notes of 100's are " << x << endl;
        // break;
    case 50 : 
        cout << "No. of notes of 50's are " << y << endl;
        // break;
    case 20 : 
        cout << "No. of notes of 20's are " << z << endl;
        // break;
    case 10 : 
        cout << "No. of notes of 10's are " << a << endl;
        // break;
    case 1 : 
        cout << "No. of notes of 1's are " << b << endl;
        // break;
    
    default:
        cout << "Total no of notes are " << (x + y + z + a + b) << endl;
        // break;
    }





    return 0;
}