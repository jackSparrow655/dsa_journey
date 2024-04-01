#include<iostream>
using namespace std;
int duplicate(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];
        // cout << ans << endl;
    }
    for(int i = 1; i < size; i ++){
        ans = ans^i;
        // cout << ans << endl;
    }
    return ans;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 2};
    cout << duplicate(arr, 5) << endl;


}