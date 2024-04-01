#include<iostream>
using namespace std;
class stack{
    int top;
    int *arr;
    int size;
    public:
    stack(int length){
        this->size = length;
        this->top = -1;
        arr = new int[size];
    }

    void push(int element){
        if(size - top > 1){
            arr[++top] = element;
        }
        else{
            cout << "stack is overflow" << endl;
        }
    }

    void pop(){
        if(top != -1){
            top--;
        }
        else{
            cout << "stack is underflow" << endl;
        }
    }

    int peck(){
        if(top != -1){
            return arr[top];
        }
        else{
            cout << "stack is underflow" << endl;
        }
        return -1;
    }

    bool isEmpty(){
        if(top == -1){
            return 1;
        }
        return 0;
    }
};

int main(){
    stack st(5);
    st.push(45);
    st.push(10);
    st.push(11);
    st.push(20);
    st.push(30);
    st.push(40);
    st.pop();
    cout << st.peck() << endl;
    if(st.isEmpty()){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }

}