#include<iostream>
using namespace std;
int main(){
    char a;
    cout << "enter the value of a: ";
    cin >> a;
    int b;
    b = int(a);
    // cout << b;
    if(96<b && b<123){
        cout << "a is a lower case"<< endl;
    }
    else if(b > 64 && b < 91){
        cout << "a is upper case"<< endl;
    }
    else{
        cout << "a is numaric"<< endl;
    }


}