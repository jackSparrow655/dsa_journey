#include <bits/stdc++.h> 
using namespace std;
double solve(double n, int m){
    int s = 1, e = n, mid = s + (e-s)/2, temp = 0;
    while(s <= e){
        if(mid*mid == n) return mid;
        else if(mid*mid < n){
            temp = mid;
            s = mid+1;
        }
        else e = mid-1;
        mid = s + (e-s)/2;
    }
    double ans = temp;
    double factor = 1;
    for(int i = 0; i < m; i++){
        factor /= 10;
        for(double j = ans; j*j < n; j += factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    cout << "enter a number : ";
    double n;
    cin>>n;
    cout << "enter the precicion: ";
    int m;
    cin >> m;
    cout << "squre root = " << solve(n, m);
}