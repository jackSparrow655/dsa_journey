#include <bits/stdc++.h>
using namespace std;
int pivot_index(int arr[], int s, int e){
    //base case
    if(s>e){
        return -1;
    }
    if(s == e){
        return s;
    }
    int mid = s + (e -s)/2;
    if(mid > s && arr[mid] < arr[mid - 1]){
        return mid - 1;
    }
    if(mid < e && arr[mid] > arr[mid + 1]){
        return mid;
    }
    if(arr[s] < arr[mid]){
        return pivot_index(arr, mid+1, e);
    }
    else{
        return pivot_index(arr, s, mid - 1);
    }
}
int main(){
    int arr[10] = {4, 5, 6, 7, 8, 9, 0, 1, 2, 3};
    int x = pivot_index(arr, 0, 9);
    cout << "the pivot element is: " << arr[x] << endl;
}