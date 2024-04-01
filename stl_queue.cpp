#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("arijit");
    q.push("avik");
    q.push("biswa");
    cout << "1st element = "<< q.front()<< endl;
    q.pop();
    cout << "affter pop 1st element is "<< q.front()<< endl; 

}