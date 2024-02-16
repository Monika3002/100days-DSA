#include<iostream>
using namespace std;
class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack (int size){
        this->size=size;
      arr=new int(size);
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

    int top(){
        return arr[top];
    }

    bool empty(){
        if(top<0){
           cout<<" stack is Empty"<<endl;
        }
        else{
           cout<<" stack is not Empty"<<endl;

        }

    }

};
int main(){
    // creation of stack
    Stack st(5)

    st.push(2);
    st.push(3);
    st.push(7);

    
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}