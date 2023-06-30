#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
    for (int i =0 ;i<size ;i++){
        cout << arr[i] << " ";
    }

}
void reverse(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
    
    int main(){
    int even[6]={1,2,3,4,5,6};
    int sizeeven=sizeof(even)/sizeof(int);
    int odd[5]={5,4,3,2,1};
    int sizeodd=sizeof(odd)/sizeof(int);

    reverse(even,sizeeven);
    reverse(odd,sizeodd);



    PrintArray(even,sizeeven);
    cout<<endl;
    PrintArray(odd,sizeodd);
    cout << endl;
}