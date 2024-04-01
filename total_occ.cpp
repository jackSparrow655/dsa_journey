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
int main(){


}