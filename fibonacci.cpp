#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " enter the number of terms: ";
    cin>> n;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    
    for(int i = 1; i <= n -2 ; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;


    }
}