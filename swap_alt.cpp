#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0, end = 1;
    while(start < n-1){
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
    }

}
int main(){
int arr[7] = {5, 8, 12, -78, 100, 200, 300};
reverse(arr, 7);
// cout << brr << endl;
for(int i = 0; i < 7; i ++){
    cout << arr[i] << " ";
}  

}