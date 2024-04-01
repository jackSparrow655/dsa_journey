#include <bits/stdc++.h> 
using namespace std;
int fibo(int n, vector<int> &ans){
    if(n <=0 || n == 1 || n == 2){
        int x = 1;
        return x;
    }
    int x = fibo(n-1, ans) + fibo(n-2, ans);
    if(x > ans[ans.size() - 1]){
        ans.push_back(x);
    } 
    return x;
}

int main(){
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(1);
    cout << fibo(9, ans) << endl;
    // reverse(ans.begin(), ans.end());
    for(int i = ans.size()-1; i >= 0; i--){
        cout << ans[i] << " ";
    }

}