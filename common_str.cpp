#include<iostream>
#include<vector>
using namespace std;

    string UncommonChars(string A, string B)
        {
            vector<char> ans;
            for(int i = 0; i < A.length(); i++){
                int count = 0;
                for(int j = 0; j < B.length(); j++){
                    if(A[i] == B[j] && count == 0){
                        ans.push_back(A[i]);
                        count++;
                    }
                }
            }
            // int n = ans.size();
            // for(int i = 1; i < n; i++){
            //     for(int j = 0; j < n-i; j++){
            //         if(ans[j] > ans[j+1]){
            //             swap(ans[j], ans[j+1]);
            //         }
            //     }
            // }
            string str(ans.begin(), ans.end());
            return str;
        }

int main(){
    string a = "arijit";
    string b = "barik";
    string c = UncommonChars(a, b);
    cout << c;
}