#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the value of n: ";
    cin>> n;
    int i = 1;
    int s = 0;
    while(i<=n){
        s = s + i;
        i+=1;
    }
    cout << "total is: "<< s << endl;
}