#include<iostream>
# include<math.h>
using namespace std;
int main(){
    // while(1){
    int rs = 1330;
    int n1, n2, n3, n4;
    char ch;
    cout << "Enter which rupee note you want to display:[1-100, 2-50, 3-20, 4-10]: ";
    cin >> ch;
    n1 = rs / 100;
    n2 = (rs % 100) / 50;
    n3 = (((rs % 100) - (n2 * 50)) / 20);
    n4 = (rs - ((n1 * 100) + (n2 * 50) + (n3 * 20))) / 10;
    switch(ch){
        case '1': cout << "100 rupee note: ";
                cout << n1 << endl;
                break;
        case '2': cout << "50 rupee note: ";
                cout << n2 << endl;
                break;
        case '3': cout << "20 rupee note: ";
                cout << n3 << endl;
                break;
        case '4': cout << "10 rupee note: ";
                cout << n4 << endl;
                break;
        default: cout << 100 << ":"<< n1 << endl;
                 cout << 100 << ":"<< n2 << endl;
                 cout << 100 << ":"<< n3 << endl;
                 cout << 100 << ":"<< n4 << endl;
        
                
    }
    // }

}