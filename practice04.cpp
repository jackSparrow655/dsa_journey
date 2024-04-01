#include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n, i = 0, ans = 0;
    cout << "enter a decimal number: ";
    cin >> n;
    while(n != 0){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        // cout << bit << " ";
        n = n >> 1;
        i ++;
    }
    cout << ans << endl;

}