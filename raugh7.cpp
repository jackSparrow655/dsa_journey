#include<iostream>
#include<vector>
using namespace std;
void longestSubstrDistinctChars (string S)
{
    // your code here
    vector<int> ans;
    int n = S.length();
    int s = 0; 
    int count = 0;
    int e = s+1;
    while(e <= n-1){
        for(int i = e; i == s; i--){
            if(S[e] != S[s]){
                count++;
                
            }
        }
        if(S[s] != S[e]){
            count++;
        }
        else{
            ans.push_back(count);
            count = 0;
            s = 0;
            e = s+1;
        }
        s++;
        e++;
    }

    int m = ans.size();
    // int k = INT32_MIN;
    for(int i = 0; i < m; i++){
        cout << ans[i];
    }
    // return k;
}

int main(){
    string s = "arijit";
    longestSubstrDistinctChars (s);
}