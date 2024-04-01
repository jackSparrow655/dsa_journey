#include<iostream>
# include<math.h>
using namespace std;
long long deci_binary(int n){
    long long mul = 1;
    long long ans = 0;
    while(n){
        long long digit = n%2;
        n = n/2;
        ans = mul*digit+ans;
        mul = mul*10;
    }
    return ans;
}
int main(){
    cout << "enter the numner: ";
    int n;
    cin >>n;
    long long  ans = deci_binary(n);
    cout << "binary of the number is " << ans <<" "<< endl;
}