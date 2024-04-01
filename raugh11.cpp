#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        char ans[n+1] = {};
        for(int i = 0; i < n; i++){
            int j = indices[i];
            ans[j] = s[i];
        }
        return ans;

    }

int main(){
    vector<int> indices;
    indices.push_back(4);
    indices.push_back(5);
    indices.push_back(6);
    indices.push_back(7);
    indices.push_back(0);
    indices.push_back(1);
    indices.push_back(2);
    indices.push_back(3);

    string s = "codeleet";
    cout << restoreString(s, indices) << endl;

}