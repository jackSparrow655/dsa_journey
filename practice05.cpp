#include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n, ans = 0, i;
    cout << "enter the number: ";
    cin >> n;
    while(n != 0){
        int digit = n % 10;
        cout << digit;
        n = n/10;
        
    }

}