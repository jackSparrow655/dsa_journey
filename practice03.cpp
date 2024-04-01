#include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n, ans  = 0, i = 0;
    cout << "enter a binary number: ";
    cin >> n;
    while(n != 0){
        int digit = n % 10;
        ans = (digit * pow(2, i)) + ans;
        i ++;
        n = n / 10;
    }
    cout << ans << endl;

}