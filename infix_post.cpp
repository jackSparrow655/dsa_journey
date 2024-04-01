#include <bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c == '^') return 3;
    else if( c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

string infixToPostfix(string str){
    string result = "";
    stack<char>st;
    int n = str.length();
    for(int i = 0; i < n; i++){
        char c = str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) result += c;
        else if(c == '(') st.push(c);
        else if(c == ')'){
            while(st.top() != '('){
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else if(st.empty() || prec(c) > prec(st.top())) st.push(c);
        else{
            while(!st.empty() && prec(c) <= prec(st.top())){
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    return result;
}

int main(){
    cout << "enter the string: " << endl;
    string str;
    cin>> str;
    cout << "postfix of the string is: " << infixToPostfix(str) << endl;
}