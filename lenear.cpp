#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i = 0; i < size; i ++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
int arr[5];
for(int i = 0; i < 5; i ++){
    cout << "enter the value of array: ";
    cin >> arr[i];
}
cout << "enter the value you want to find: ";
int key;
cin >> key;
if(search(arr, 5, key)){
    cout << "present";
}
else{
    cout << "absent";
}
}