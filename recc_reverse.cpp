#include <bits/stdc++.h>
using namespace std;
void reverse(string &str,int s){
    int e = str.length() - s-1;
    if(s > e){
        return;
    }
    swap(str[s], str[e]);
    s++;
    reverse(str, s);
}
int main(){
    string str = "arijit";
    reverse(str, 0);
    cout << str << endl;
}