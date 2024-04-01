#include <bits/stdc++.h> 
#include<iostream> 
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.pop();
    // s.pop();
    cout << "printing top element " << s.top() << endl;
    if(s.empty()){
        cout << "empty" << endl;
    }   
    else{
        cout << "not empty" << endl;
    }
    cout << "size of stack is: " << s.size() << endl;
}