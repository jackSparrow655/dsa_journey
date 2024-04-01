#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "enter the " << n << "elements of the array: " ;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int x = getSum(arr, n);
    cout << "the sum of all elements of the arrray is: " << x ;
}