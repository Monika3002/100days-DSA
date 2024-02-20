#include<iostream>
using namespace std;
class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack (int size){
        this->size=size;
      arr=new int[size];
      top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack  is overflow" <<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is underflow" <<endl;
        }
    }

   void peek(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<< arr[top];
        }
        
    }

    bool empty(){
        if(top<0){
           cout<<" stack is Empty"<<endl;
           return true;
        }
        else{
           cout<<" stack is not Empty"<<endl;
              return false;

        }

    }

};
int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.peek();
    s.pop();
    cout<<"hkjfhdu0"<<endl;
   s.peek();
    s.empty();
    return 0;
}