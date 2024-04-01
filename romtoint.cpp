#include<iostream>
#include<string>
using namespace std;
int fx(char ch){
    if(ch == 'I'){
        return 1;
    }
    if(ch == 'V'){
        return 5;
    }
    if(ch == 'X'){
        return 10;
    }
    if(ch == 'L'){
        return 50;
    }
    if(ch == 'C'){
        return 100;
    }
    if(ch == 'D'){
        return 500;
    }
    if(ch == 'M'){
        return 1000;
    }
    return 0;
}

int romanToInt(string s) {
    long long int n = s.length() - 1;
    long long int sum = 0;
    for(int i = n; i >= 0; i--){
        char c = s[i];
        char d = s[i - 1];
        int a = fx(c);
        int b = fx(d);
        if(a <= b){
            sum = sum + a;
        }
        else{
            sum = sum - a;
        }
    }
    return sum;
}

int main(){
    string s = "VII";
    int a = romanToInt(s);
    cout << a;
}