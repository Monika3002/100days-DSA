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
    int arr[6] = {3,1,3,6,1};

   cout << uniqueElement( arr , 6) << endl;

    // printArray (arr,5 );
    

}