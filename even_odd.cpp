#include<iostream>
# include<math.h>
using namespace std;
bool isEven(int num){
    if(num & 1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    if(isEven(n)){
        cout << "number is even";
    }
    else{
        cout << "number is odd";
    }

}