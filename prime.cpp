#include<iostream>
using namespace std;
int main(){
    cout << "enter the number: ";
    int n,k =0;
    cin >> n;
    int a;
    for (int i = 2; i < n; i++){
        k +=i;
        if (n % i == 0){
            cout << "not prime"<< endl;
            break;
        }
        
    }
    if((k + n +1) == (n * (n+1) / 2)) {
        cout << "prime" << endl;
    }


}