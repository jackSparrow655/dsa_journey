#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot = arr[0];
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotindex = s + count;
    swap(arr[s], arr[pivotindex]);
    int i = s;
    int j = e;
    while(i < pivotindex && j > pivotindex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotindex && j > pivotindex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int p = partition(arr, s, e);
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
}
void merge(int arr[], int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    int index = s;
    for(int i = 0; i < len1; i++){
        arr1[i] = arr[index++];
    }
    for(int i = 0; i < len2; i++){
        arr2[i] = arr[index++];
    }
    index = s;
    int m = 0; 
    int n = 0;
    while(m < len1 && n < len2){
        if(arr1[m] <= arr2[n]){
            arr[index++] = arr1[m++];
        }
        else{
            arr[index++] = arr2[n++];
        }
    }
    while(n < len2){
        arr[index++] = arr2[n++];
    }
    while(m < len1){
        arr[index++] = arr1[m++];
    }

}
void mergesort(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);
    merge(arr, s, e);
}
int main(){
    int arr[10] = {5, 3, 1, 4, 2, 10, 8, 6, 9, 7};
    int s = 0;
    int e = 9;
    // quicksort(arr, s, e);
    mergesort(arr, s, e);
    for(int i = 0; i <= e; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}