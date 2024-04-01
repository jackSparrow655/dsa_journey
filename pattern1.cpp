#include <bits/stdc++.h> 
using namespace std;
int fib(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * fib(n-1);
}
int com(int a, int b){
    return fib(a)/(fib(b) * fib(a-b));
}

int main(){
    int n;
    int m;
    cout << "enter the number of rows: ";
    cin>> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << com(i, j);
        }
        cout << endl;
    }
}