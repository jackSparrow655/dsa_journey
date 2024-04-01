#include <bits/stdc++.h>
using namespace std;
bool is_good(int n, int d){
    int sum = 0;
    int digit = n % 10;
    sum += digit;
    if(digit == d) return false;
    n = n/10;
    while(n > 0){
        int digit = n % 10;
        if(digit == d || digit < sum) return false;
        else{
            sum += digit;
            n = n/10;
        }
    }
    return 1;
}
int main(){
    cout << "enter the number: ";
    int n;
    cin>> n;
    if(is_good(n, 6)) cout << "it is a good number:" << endl;
    else cout << "it is not a good number" << endl;
}