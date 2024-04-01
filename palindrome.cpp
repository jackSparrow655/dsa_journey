#include<iostream>
using namespace std;
bool checkPalindrome(string s)
{
    int n = s.length();
    string str = "";
    for(int i = 0; i < n; i++){
        if((s[i] >= 'a' && s[i] <= 'z')|| (s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= '0' && s[i] <= '9')){
            str.push_back(s[i]);
        }
        else{
            continue;
        }
    }
    cout << "now the string is: " << str;
    
    string g = "";
    int n2 = str.length();
    for(int i = 0; i < n2; i++){
        if((str[i] >= 'a' && str[i] < 'z')||(str[i] >= 0 && str[i] <= 9)){
            g.push_back(str[i]);
        }
        else{
            char ch = str[i] - 'A' + 'a';
            g.push_back(ch);
        }
    }

    int n1 = g.length();
    int p = 0;
    int e = n1 - 1;
    while(p < e){
        if(g[p] != g[e]){
            return 0;
        }
        else{
            p++;
            e--;
        }
    }
    return 1;
}


#include<iostream>
#include <string>
using namespace std;
int main(){
    string sp;
    cout << "enter the checking word: ";
    cin >> sp;
    if(checkPalindrome(sp)){
        cout << "Palindrome";
    }
    else{
        cout << "not Palindrome";
    }

}