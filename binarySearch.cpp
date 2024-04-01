#include<iostream>
using namespace std;
int binarySearch(int array[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2 ;
    while(start <= end){
        if(array[mid] == key){
            return mid;
            break;
        }
        if(key > array[mid]){
            start = mid + 1;
            mid = (start + end) / 2 ;
        }
        if(key < array[mid]){
            end = mid - 1;
            mid = (start + end) / 2 ;
        }    
    }
    return -1;
}

int main(){
    int even[5] = {5, 7, 8, 9, 10};
    int index = binarySearch(even, 5, 5);
    cout << "index of 5 is: " << index << endl;
}