#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of row: ";
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 0;
        while(j < i){
            cout << i-j << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}