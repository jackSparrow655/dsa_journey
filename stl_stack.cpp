#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("father");
    s.push("mother");
    s.push("children");
    
    cout << "1st element= "<< s.top()<< endl;
    s.pop();
    cout << "after pop 1st element= "<< s.top()<< endl;
    cout << "empty or not: "<< s.empty()<< endl;
    cout << "size of the stack is: "<< s.size();
}