#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cout << "enter the number of terms: ";
    cin>>n;
    int l = 0;
    int k = 1;
    cout << l <<" " << k << " ";
    for(int i = 2; i < n; i++){
        int ans = l + k;
        cout << ans << " ";
        l= k;
        k = ans;
    }
    return 0;
}