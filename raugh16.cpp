#include <bits/stdc++.h> 
using namespace std;
int fibo(int n){
    if(n==1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout << "enter how many terms you want to print: ";
    cin>>n;
    for(int i = n; i > 0; i--){
        cout << fibo(i) << " ";
    }
}