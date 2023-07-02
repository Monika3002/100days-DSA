// problem no 1207

#include<iostream>
using namespace std;
void printArray(int arr[] , int size){
    for(int i=0 ; i <size ; i++){
        cout << arr[i]<< " ";
    }
}
int uniqueElement(int arr[ ], int size){
    int ans =0;
    for(int i =0 ; i< size ; i++){
        ans = ans ^ arr[i];
    }
    return ans;

}
int main(){
    int arr[10] = {-3,0,1,-3,1,1,1,-3,10,0};
    int n = sizeof(arr)/sizeof(int);

    int IsOdd = uniqueElement(arr , n);
    cout << IsOdd ;
    if(IsOdd == 0){
        cout<< "TRUE" << endl;
    }
    else{
        cout<< "FALSE" << endl;
        
    }


    

}