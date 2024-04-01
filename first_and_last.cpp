#include<iostream>
using namespace std;
int findFirst(int arr[], int n, int k){
    int ans = -1;
    int s = 0, e = n-1;
    int m = s + (e - s)/2;
    while(s <= e){
        if(arr[m] == k){
            ans = m;
            e = m - 1;
        }
        else if(k > arr[m]){
            s = m +1;
        }
        else{
            e = m - 1;
        }
        m = s + (e - s)/2;
    }
    return ans;
}
int findLast(int arr[], int n, int k){
    int ans = -1;
    int s = 0, e = n-1;
    int m = s + (e - s)/2;
    while(s <= e){
        if(arr[m] == k){
            ans = m;
            s = m + 1;
        }
        else if(k > arr[m]){
            s = m +1;
        }
        else{
            e = m - 1;
        }
        m = s + (e - s)/2;
    }
    return ans;
}
int total_occ(int arr[], int n, int k){
   int x = findFirst(arr, 5, 7);
   int y = findLast(arr, 5, 7); 
   if(x == y){
    return 1;
   }
   return ((y - x) + 1);
}
int main(){
    int arr[5] = {3, 5, 6, 7, 7};
    findFirst(arr, 5, 6);
    findLast(arr, 5, 6);
    cout << "starting index of 6 is: " << findFirst(arr, 5, 6) << endl;
    cout << "ending index of 6 is: " << findLast(arr, 5, 6) << endl;
    cout << "toatal occ of 7 is: " << total_occ(arr, 5, 7) << endl;

}