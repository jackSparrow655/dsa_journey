#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the value of rows: ";
    cin >> n;
    int i = 1;
    while(i < n){
        int j = 1;
        int k = 1;
        int l = 1;
        while(j < n-i){
            cout << "  ";
            j += 1;
        }
        int m = 1;
        while(k < i+1){
            cout << m << " ";
            m+=1;
            k +=1;
        }
        while(l < i){
            cout << l << " ";
            l +=1;
        }
        i +=1;
        cout << endl;
    }

}