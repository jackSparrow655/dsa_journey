//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// class Solution{
    // private:
    bool check(vector<vector<int>>& m, int n, int x, int y, vector<vector<int>> noback){
        if((m[x][y] == 1)&&(x >=0 && x <= n-1)&&(y >=0 && y <= n-1)&&(noback[x][y] == 0)){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>>& m, int n, vector<string>& ans, int x, int y, vector<vector<int>> noback, string path){
        if(x == n-1 || y == n-1){
            ans.push_back(path);
            return;
        }
        noback[x][y] = 1;
        //down
        int newx = x + 1;
        int newy = y;
        if(check(m, n, newx, newy, noback)){
            path.push_back('D');
            solve(m, n, ans, newx, newy, noback, path);
            path.pop_back();
            
        }
        //up
        newx = x - 1;
        newy = y;
        if(check(m, n, newx, newy, noback)){
            path.push_back('U');
            solve(m, n, ans, newx, newy, noback, path);
            path.pop_back();
            
        }
        //right
        newx = x;
        newy = y+1;
        if(check(m, n, newx, newy, noback)){
            path.push_back('R');
            solve(m, n, ans, newx, newy, noback, path);
            path.pop_back();
            
        }
        //left
        newx = x;
        newy = y-1;
        if(check(m, n, newx, newy, noback)){
            path.push_back('L');
            solve(m, n, ans, newx, newy, noback, path);
            path.pop_back();
            
        }
        
        noback[x][y] = 0;
    }
    // public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0] == 0){
            return ans;
        }
        int srcx = 0;
        int srcy = 0;
        vector<vector<int>> noback;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                noback[i][j] = 0;
            }
        }
        string path;
        solve(m, n, ans, srcx, srcy, noback, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
int main(){
    int m[3][3] = {1,0,0,1,1,0,1,1,1};
    int n = 3;
    string s = findPath(m, n);
}