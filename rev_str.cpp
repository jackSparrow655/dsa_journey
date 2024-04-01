#include<iostream>
#include <vector>
#include<string>
using namespace std;
// void rev(string s){
//     vector<string> ans;
//     int n = s.length();
//     string str = "";
//     for(int i = 0; i < n; i++){
//         if(s[i] == ' '){
//             ans.push_back(str);
//             str = "";
//         }
//         else{
//             str+=s[i];
//         }
//     }
//     ans.push_back(str);
//     // cout << ans[0];
//     int m = ans.size();
//     for(int i = 0; i < m; i++){
//         string avik ="";
//         strcpy(avik,  ans[i]);
//         reverse(avik);
//         //ans[i] = tem;
//         cout << avik;
//     }
//     // int a = 0;
//     // int b = m-1;
//     // while(a<b){
//     //     swap(ans[a], ans[b]);
//     //     a++;
//     //     b--;
//     // }
//     cout << "reverse of the string is: ";
//     for(int i = 0; i < m; i++){
//         cout << ans[i] << " ";
//     }
// }
void reverse(string &s){
    int n = s.length();
    int a = 0;
    int e = n - 1;
    while(a < e){
        swap(s[a], s[e]);
        a++;
        e--;
    }
    // return s;
}


int main(){
    string s = "India";
    // cout << " enter the string: ";
    // cin >> s;

    reverse(s);
    cout << s<<endl;    


}