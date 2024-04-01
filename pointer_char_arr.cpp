#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[7] = "arijit";
    int *p1 = &arr[0];
    char *p2 = &ch[0];
    cout << p1 << endl;
    cout << p2 << endl;//print total string(cout ka implitation char array ke liye alag hai)
    
}