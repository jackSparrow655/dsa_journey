#include<iostream>
using namespace std;
int decitoHexa(int n){
    int sum = 0;
    int mul = 1;
    while(n != 0){
        int digit = n % 6;
        sum = digit * mul + sum;
        mul = mul * 10;
        n = n / 6;
    }
    return sum;
}

int main(){
    int n = 34;
    int y = decitoHexa(n);
    cout << y << endl;


}