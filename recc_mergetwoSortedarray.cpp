#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;
    int len1 = mid - s +1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }
    k = mid + 1;;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    k = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k] = first[index1];
            index1++;
            k++;
        }
        else{
            arr[k] = second[index2];
            index2++;
            k++;
        }
    }
    while(index1 < len1){
        arr[k] = first[index1];
        index1++;
        k++;
    }
    while(index2 < len2){
        arr[k] = second[index2];
        index2++;
        k++;
    }
    delete[] first;
    delete[] second;
}

void mergesort(int arr[], int s, int e){
    //basse case
    if(s >= e){
        return;
    }
    int mid = (s+e) /2 ;
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);
    merge(arr, s, e);
}


int main(){
    int arr[13] = {8, 2, 45, 4, 6,7,5,6,89,12,4,3,8};
    int n = 13;
    mergesort(arr, 0, n-1);
    print(arr,n);
}