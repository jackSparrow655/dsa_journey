#include <bits/stdc++.h> 
using namespace std;
int solve(int n){
    int s = 1, e = n, mid = (s+e)/2, ans = 0;
    while(s <= e){
        if(mid*mid == n) return mid;
        else if(mid*mid < n){
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;   
        mid = (s+e)/2;
    }
    return ans;
}
double more(int n, int ans, int prec){
    double sol = ans;
    double factor = 1;
    for(int i = 0; i < prec; i++){
        factor /= 10;
        for(double j = sol; j*j < n; j+=factor){
            sol = j;
        }
    }
    return sol;
}
int main(){
    cout << "enter a number : ";
    int n;
    cin>>n;
    cout << solve(n) << endl;
    int ans = solve(n);
    cout << more(n, ans, 3) << endl;
}
