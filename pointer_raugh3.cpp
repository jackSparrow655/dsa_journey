#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5, 2, 3, 4, 5};
    cout << arr << endl;
    cout << &arr[0] << endl;//name of the array is the pointer of the first element.
    cout << *arr << endl;//printing the value at 1st index
    cout << *arr + 1 << endl;//value at 1st index + 1
    cout << *(arr + 3) << endl;//pointer will move 3 step and then printing the value
    //arr[i] = *(arr + i);
    //i[arr] = *(i + arr);

    // int i = 1;
    // cout << i[arr] << endl;
    // cout << sizeof(arr) << endl;
    int *p1 = &arr[0];
    // cout << sizeof(p1) << endl;
    cout << &arr[0] << endl;
    cout << &p1 << endl;
    // arr++;
    p1++;


}