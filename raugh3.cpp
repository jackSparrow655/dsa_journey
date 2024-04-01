#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string ans = "121235000";
    int n = ans.length();
    int k = ans.length() - 1;
    int count=0;
	    while(ans[k] == '0'){
	        count++;
	        k--;
        }
        cout<<count<< endl;
        ans.erase(n-count,n-1);
        cout<<ans;
    
}