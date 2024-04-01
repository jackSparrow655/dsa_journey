// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int s){
        this->top = -1;
        this->size = s;
        this-> arr = new int[s];
    }

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "stack underflow" << endl;
        }
    } 

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool empty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout << "the top element of the stack is: " << s.peek() << endl;
    if(s.empty()){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }
}