#include <bits/stdc++.h>
using namespace std;
void leader(int arr[], int n){
    int s = n - 2;
    int e = n-1;
    int max = arr[e];
    vector<int> ans;
    cout << max <<" ";
    while(s != 0){
        if(arr[s] > max){
            max = arr[s];
            cout << max <<" ";
            s--;
        }
    }
}

int main(){
    int n;
    cout << "enter the number of elements: ";
    cin >> n;
    cout << "enter the elements of the array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    leader(arr, n);
}