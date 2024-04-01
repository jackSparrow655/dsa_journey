#include<iostream>
using namespace std;
int getMax(int array[], int size){
    int maxi = INT32_MIN;

    for(int i = 0; i < size; i++){
        maxi = max(maxi, array[i]);
        // if(max < array[i]){
        //     max = array[i];
        // }
    }
    return maxi;
}
int getMin(int array[], int size){
    int mini = INT32_MAX;
    for(int i = 0; i < size; i++){
        mini = min(mini, array[i]);
        // if(min > array[i]){
        //     min = array[i];
        // }
    }
    return mini;
}
int main(){
    int size;
    cout <<"enter the size of array: ";
    cin >> size;
    int arr[100];
    for(int i = 0; i < size; i++){
        cout << "enter the values of array: ";
        cin >> arr[i];
    }
    cout << "maximum value of the array is: " << getMax(arr, size) << endl;
    cout << "minimum value of the array is: " << getMin(arr, size) << endl;
}