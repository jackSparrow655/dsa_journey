#include<iostream>
using namespace std;
char getMax(string s){
    int n = s.length();
    char arr[26] = {0};
    int num = 0;
    for(int i = 0; i < n; i++){
        char ch = s[i];
        num = ch - 'a';
        arr[num]++;
    }
    int min = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(arr[i] > min){
            ans = i;
            min = arr[i];
        }
    }
    char fans = ans + 'a';
    return fans;
}

int main(){
    string s;
    cout << "enter any string: ";
    cin >> s;
    cout << "maximaum repeted charecter is: "<< getMax(s) << endl;
    
}