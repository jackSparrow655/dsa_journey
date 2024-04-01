#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0, end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }

}
int main(){
int arr[5] = {5, 8, 12, -78, 100};
reverse(arr, 5);
// cout << brr << endl;
for(int i = 0; i < 5; i ++){
    cout << arr[i] << " ";
}  

}
