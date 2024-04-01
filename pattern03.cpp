#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 1;
    int a = 65;
    while(i <= n){
        int j = 0;
        int b = a;
        while(j < i ){
            char c = b;
            cout << c << " ";
            j += 1;
            b -=1;
        }
        i += 1;
        a += 1;
        cout << endl;
    }

}