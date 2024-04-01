#include<iostream>
# include<math.h>
using namespace std;
int fact(int n){
    if(n == 0){
        return 1;
    }
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans = ans * i;
    }
    return ans;
}
int nCr(int n, int r){
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return (num / den);
}
int main(){
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    // cout << fact(n);
    cout << nCr(n, r);
     
}