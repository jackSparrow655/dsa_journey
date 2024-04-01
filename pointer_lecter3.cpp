#include <iostream>
using namespace std;
void update(int **p){
    // p = p + 1;
    *p = *p + 1;
    // **p = **p + 1;
}
int main(){
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;
    // cout << "printing p1 = " << p1 << endl;
    // cout << "printing p2 = " << *p2 << endl;
    // cout << "printing i = " << *p1 << endl;
    // cout << "printing i = " << **p2 << endl;
    // cout << "printing i = " << i << endl;
    // cout << "printing x = " << p1 << endl;
    // cout << "printing x = " << &i << endl;
    // cout << "printing x = " << *p2 << endl;
    cout << "printing i = " << i << endl;
    cout << "printing p1 = " << p1 << endl;
    cout << "printing p2 = " << p2 << endl;
    update(p2);
    cout << "after update: "<< endl;
    cout << "printing i = " << *(p1-1) << endl;
    cout << "printing p1 = " << p1 << endl;
    cout << "printing p2 = " << p2 << endl;
}