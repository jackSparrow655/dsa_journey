#include<iostream>
using namespace std;
bool checkDuplicate(vector<int> &arr, int n, int k) {
    vector<int> ans;
    for(int i = 0; i < n; i ++){
        if(arr[i] == k){
            ans.push_back(i);
        }
    }
    int size = ans.size();
    for(int i = size - 3; i >= 0; i--){
        if((ans[i] - ans[i-1])==(ans[i-1] - ans[i-2])){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[5] = { 2, 3, 4, 2};
    cout << duplicate(arr, 5) << endl;


}