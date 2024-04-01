#include <iostream>
using namespace std;
void update(int *p){
    p+=1;
    cout << "inside p = " << p << endl;
}
void update_value(int *p){
    *p = *p + 1;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int *p = &n;
    cout << "before p = "<< p << endl;
    update(p);
    cout << "after p = " << p << endl;
    //inside the function we cannt change the pointer as in the function a coppy of the pointer passes
    //but through the function we can change the value of the pointer
    cout << *p << endl;
    update_value(p);
    cout << *p << endl;
}