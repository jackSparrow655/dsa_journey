#include<iostream>
#include<string>
using namespace std;

void dec2b(int n){
    string str;
      while(n){
      if(n & 1) // 1
        str+='1';
      else // 0
        str+='0';
      n>>=1; // Right Shift by 1 
    }
    int m = str.length() - 1;
    int o = 0;
    while(o < m){
        swap(str[o], str[m]);
        o++;
        m--;
    }
    int l = str.length();
    for(int i = 0; i < l; i++){
        cout << str[i];
    }
    
}

int main(){
    int n;
    cout << "enter any decimal number: ";
    cin >> n;
    dec2b(n);

}