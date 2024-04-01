#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout << "num =" << num << endl;
    int *ptr = &num;
    cout << "ptr =" << ptr <<endl;
    cout << "*ptr = " << *ptr << endl;
    double d = 8.5;
    cout << "d = " << d <<endl;
    double *ptr2 = &d;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "size of ptr = " << sizeof(ptr) << endl;
    cout << "size of ptr2 = " << sizeof(ptr2) << endl;
    // (the pointer save the address only so, whether the value is integer of charecter of float or double ,the pointer of all the variables will be of same size.It depends on device to device.In my device the size of all pointer is 4,In bubber's device it was 8.)
    char a = 'a';
    char *ptr3 = &a;
    cout << sizeof(ptr3);
}