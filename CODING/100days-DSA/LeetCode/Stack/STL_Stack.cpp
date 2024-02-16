#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation of stack
    stack<int>st;

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