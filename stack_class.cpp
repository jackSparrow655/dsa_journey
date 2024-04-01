// #include <bits/stdc++.h> 
#include<iostream> 
// #include<stack>
//implementation of stack
using namespace std;  

    class stack{
        public:
        //properties
        int *arr;
        int top;
        int size;

    //constructor
    stack(int l){
        this->size = l;
        arr = new int[size];
        this->top = -1;
    }

    //behaviours

    void push(int element){
        if(size - top > 1){
            arr[top+1] = element;
            top++;
        }
        else{
            cout << "stack overflow"<<endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout <<"stack undeflow" << endl;
        }
    }
    int peck(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "stack underflow" << endl;
        }
        return -1;
    }
    bool isEmpty(){
        if(top >= 0){
            return 0;
        }
        return 1;
    }
    };
int main(){
    stack st(5);
    st.push(10);
    st.push(15);
    st.push(22);
    st.push(45);
    st.push(4);
    st.push(5);
    st.pop();
    st.pop();
    st.pop();

    cout << st.peck() << endl;
    if(st.isEmpty()){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }

}
