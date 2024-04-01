#include <bits/stdc++.h>
using namespace std;
int pivot_index(int arr[], int s, int e){
    //base case
    if(s > e){
        return -1;
    }
    if(s == e){
        return s;
    }
    int mid = (s + e) / 2;
    if(mid < e && arr[mid] > arr[mid+1]){
        return mid;
    }
    if(mid > s && arr[mid] < arr[mid - 1]){
        return mid - 1;
    }
    if(arr[mid] > arr[s]){
        return pivot_index(arr, mid+1, e);
    }
    else{
        return pivot_index(arr, s, mid- 1);
    }
}

int main(){
    int n;
    cout << "enter the number of element: ";
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cout << "enter the " << i+1 << "th value of array: ";
        cin >> arr[i];
    }
    int x = pivot_index(arr, 0, n-1);
    cout << "your array is: " << "[";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
    if(x == -1){
        cout << "there is no pivot element.";
    }
    else{
        cout << "the pivot element is: " << arr[x] << endl;
    }
}