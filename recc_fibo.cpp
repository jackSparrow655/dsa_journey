#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fibo(n-1) + fibo(n -2);
}

int main(){
    cout << "which term to print: ";
    int n;
    cin >> n;
    // cout << fibo(n) << endl;
    fibo(n);
}