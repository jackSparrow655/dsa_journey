#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j < i){
            cout << "  ";
            j += 1;
        }
        while (j < n+1){
            cout << j << " ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}