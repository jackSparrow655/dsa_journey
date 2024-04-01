#include<iostream>
# include<math.h>
using namespace std;
bool isPrime(int n){
    int a;
    for(int i = 2; i < n; i++){
        a = n % 2;
        if(a == 0){
            return 0;
            break;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    if(isPrime(n)){
        cout << "the number is prime";
    }
    else{
        cout << " the number is not prime";
    }

}