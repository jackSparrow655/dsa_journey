#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    int m = n / 2;
    for(int i = 2; i <= m; i++){
        if(n % i == 0){
            return 0;
        }  
    }
    return 1;
}
int main(){
    cout << "enter any number: ";
    int n;
    cin>> n;
    if(isPrime(n)){
        cout << "prime" << endl;
    }
    else{
        cout << "not prime" << endl;
    }
}