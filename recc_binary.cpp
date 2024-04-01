#include <bits/stdc++.h>
using namespace std;
bool binary(int arr[], int s, int e, int k){
    sort(arr+s, arr+e+1);
    for(int i = s; i <= e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    if(s > e){
        return false;
    }
    int mid = s + (e-s) /2;
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] > k){
        return binary(arr, s, mid-1, k);
    }
    else{
        return binary(arr, mid+1, e, k);
    }
    
}
int main(){
    int arr[5] = {4,1,5,2,3};
    bool a = binary(arr,0,4, 5);
    if(a == 1){
        cout << "value is present.";
    }
    else{
        cout << "value is not present";
    }
}
