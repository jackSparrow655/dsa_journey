#include <bits/stdc++.h>
using namespace std;
int binary(int n){
	int i = 1;
	int ans = 0;
	while(n){
		int digit = n % 2;
		ans = digit * i + ans;
		n = n/2;
		i = i*10;
	}
    return ans;
}
int main(){
    int n;
    cout << "enter the decimal no: ";
    cin>> n;
    cout << "binary of the number is: "<< binary(n) << endl;
}