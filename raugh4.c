#include<stdio.h>
int binaraytoDecimal(int n){
    int sum = 0;
    int mul = 1;
    while(n != 0){
        int bit = n % 10;
        sum = bit * mul + sum;
        mul = mul * 2;
        n = n / 10;
    }
    return sum;
}
int main(){
    int n;
    printf("enter any binary number: ");
    scanf("%d", &n);
    int x = binaraytoDecimal(n);
    printf("decimal of the number is: %d", x);
}