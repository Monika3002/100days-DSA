#include<iostream>
using namespace std;
void print(int  n ){
    if(n>0){
        print(n-1);
        cout<< n << " ";
    }
    return ;
}
void printreverse(int  n ){
    if(n>0){
        cout<< n << " ";
        print(n-1);
    }
    return ;
}

int main(){
    int n;
    cin >>n;
    print(n);
    cout<<endl;
    printreverse(n);
}