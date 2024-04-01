#include<iostream>
using namespace std;
int main(){
    float a;
    cout << "enter the value of a: ";
    cin>> a;
    if(a > 0){
        cout << "a is +ve" << endl;
    }
    else if(a < 0){
        cout << "a is -ve" << endl;
    }
    else{
        cout << "a is zero" << endl;
    }

}
