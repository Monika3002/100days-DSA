#include<iostream>
using namespace std;
int getmin(int arr[], int size){
   int  mini= INT32_MAX;
    for(int i=0 ; i<size ; i++){

        // if(mini < arr[i]){
        //     mini=arr[i];
        // }

        mini = min ( mini, arr[i]);

    }
    return mini;
}
int getmax(int arr[], int size){
   int  maxi= INT32_MIN;
    for(int i=0 ; i<size ; i++){

        // if(max < arr[i]){
        //     max=arr[i];
        // }

        maxi = max ( maxi, arr[i]);

    }
    return maxi;
}

int main(){
    int arr[10]= {4,2,-5,72,84,3,-19,8,-5};
    int size = sizeof(arr)/sizeof(int);
    cout << getmax(arr,size) << endl ;
    cout << getmin(arr,size) << endl ;

}