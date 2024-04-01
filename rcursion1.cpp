#include<iostream>
using namespace std;

int print(int n){
    if(n == 0){
        return 0;
    }
    cout << n << " ";
    return print(n - 1);
}

int count(int n){
    if(n == 0){
        return 0;
    }
    return n + count(n - 1);
}
int power(int b, int p){
    if(p == 0){
        return 1;
    }
    return b * power(b, p-1);
}
int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    // cout << "enter a +ve number: ";
    // int n;
    // cin >> n;
    // cout << "factorial = " << fact(n) << endl;

    // cout << "enter base and poer: ";
    // int b, p;
    // cin >> b;
    // cin >> p;
    // cout << "ans is: " << power(b, p) << endl;

    // cout << "enter how much to count: ";
    // int n ;
    // cin >> n;
    // cout << "answer is : " << count(n) << endl;

    cout << "enter how much to print: ";
    int n;
    cin >> n;
    print(n);
}