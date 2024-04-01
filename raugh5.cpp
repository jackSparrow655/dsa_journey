#include<iostream>
using namespace std;
int lcm(int a, int b){
    int m = a > b ? a : b;
    int n = a > b ? b : a;
    int ans = n, i = 0;
    while(i == 0){
        ans % m == 0 ? i = 1 : ans += n;
    }
    return ans;

}
int main(){
    int a, b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter the second number: ";
    cin >> b;
    int c = lcm(a, b);
    cout << "lcm of the numbers is: " << c << endl;
    }
