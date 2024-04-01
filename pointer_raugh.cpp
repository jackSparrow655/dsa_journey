#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int m = 10;
    int *p1 = &n;
    int *p2 = &m;
    cout << "*p1(before coppy) = " << *p1 << endl;
    p1 = p2;
    cout << "*p1(after coppy) = " << *p1 << endl;
    *p1 = 15;
    cout << "*p1(after changing the value) = " << *p1 << endl;
    cout << "n = " << n << endl;
    cout << "m = " << m << endl;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    // cout << "*p1 = " << *p1 << endl;
    // cout << "*p2 = " << *p2 << endl;

}