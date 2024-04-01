#include<iostream>
using namespace std;
void update(int &n) { 
    n++;
}
int main(){
    int i = 5;
    int &j = i;
    // cout << i << endl;
    // cout << ++j << endl;
    // cout << i << endl;
    cout << i << endl;
    update(i);
    cout << i << endl;
}