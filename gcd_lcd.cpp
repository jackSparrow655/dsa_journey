#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
    if(n == m) {
        return n;
    }
    if(n > m){
        return gcd(n-m, m);
    }
    else{
        return gcd(n, m-n);
    }
}
int lcm(int n, int m){
    return (n * m) / gcd(n, m);
}

int main(){
    cout << "enter first number: ";
    int n;
    cin >> n;
    cout << "enter second number: ";
    int m;
    cin>> m;
    cout << "gcd of the two numbers is: " << gcd(n, m) << endl;
    cout << "lcm of the two number is: " << lcm(n, m) << endl;
}