#include <bits/stdc++.h>
using namespace std;
void f1(int n){
    if(n == 0){
        return;
    }
    f1(n-1);
    cout << n << " ";
}

void f2(int n, int i){
    if(i > n){
        return;
    }
    f2(n, i+1);
    cout << i << " ";
}
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    int i;
    cout << "enter i: ";
    cin >> i;
    cout << "1 to n is: ";
    f1(n);
    cout << endl << "n to i is: ";
    f2(n, i);
}