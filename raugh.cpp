#include<iostream>
# include<math.h>
using namespace std;
int main(){
    int n, ans;
    cout << "enter the number: ";
    cin >> n;
    for(int i = 0; i <= 20; i++){
        ans = pow(2, i);
        if(ans == n){
        cout << "good";
        }
    }
    }
