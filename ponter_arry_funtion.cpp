#include <iostream>
using namespace std;
int getsum(int arr[], int n){
    // cout << sizeof(arr) << endl;
    // we cannt pass the arrray in a function 
    // we pass the pointer of the first element of the arry therefore we need to send the size of the array as a parameter
    // benifit of this process is we can send a part of a given arrayy in a function and operaete with it
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+= arr[i];
    }
    return sum;
}


int main(){
    int arr[6] = {1,2,3,4,5,6};
    cout << sizeof(arr) << endl;
    cout << getsum(arr, 6) << endl;
    cout << getsum(arr+2, 4);
}