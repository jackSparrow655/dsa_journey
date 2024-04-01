#include<iostream>
#include<string>
using namespace std;
char one(string s, int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ (s[i] - 'a');
    }
    char x = ans + 'a';
    return x;
}
int main(){
    cout << "emter a string: ";
    string s;
    cin >> s;
    int n = s.length();
    char x = one(s, n);
    cout << "ans is: " << x << endl;
}