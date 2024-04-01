#include<iostream>
#include<string>
using namespace std;
void decimal(string str){
    // string str;
    // int digit;
    // while(n >= 0){
    //     digit = n % 10;
    //     char x = digit;
    //     str+=x;
    //     n = n / 10;
    // }
    int l = str.length() - 1;
    int base = 1;
    int ans = 0;
    while(l >= 0){
        if(str[l] == '1'){
            ans = ans + base;
        }
        base = base * 2;
        l--;
    }
    cout << "decimal of the given number is: " << ans;
    }

int main(){
    string n;
    cout << "enter any binary number: ";
    cin >> n;
    decimal(n);


}