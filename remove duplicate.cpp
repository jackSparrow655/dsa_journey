#include<iostream>
#include<vector>
using namespace std;
string duplicate(string str){
    int index = 0;
    string ans;
    int n = str.length();
    for(int i = 1; i < n; i++){
        int j;
        for(j = 0; j < i; j++){
            if(str[i] == str[j]){
                break;
            }
        }
        if(i == j){
            ans[index++] = str[i];
        }
    }
    return ans;
    
}

int main(){
    string a = "arijit";
    string b = duplicate(a);
    cout << b;

}