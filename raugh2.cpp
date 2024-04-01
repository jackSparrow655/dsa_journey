#include<iostream>
using namespace std;
int decimal(int n){
    int sum = 0;
    int mul = 1;
    while(n != 0){
        int bit = n % 10;
        sum = bit * mul + sum;
        n = n/10;
        mul = mul * 2;
    }
    return sum;
}
int binary(int n){
        int sum = 0;
        int mul = 1;
        while(n != 0){
            int bit = n % 2;
            sum = bit * mul + sum;
            mul = mul * 10;
            n = n/2;
        }
        return sum;
    }

int main(){
    int n;
    cout << "enter a deciamal number: ";
    cin >> n;
    int y = binary(n);
    cout << "binary of the number is: " << y << endl;
    cout << "enter a binary number: ";
    int m;
    cin >> m;
    int x = decimal(m);
    cout << "decimal of the number is: " << x << endl;
}