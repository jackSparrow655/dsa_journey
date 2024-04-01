#include<iostream>
using namespace std;
int last_occ(int arr[], int n, int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e - s)/ 2;
    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            s = mid +1;
        }
        if(arr[mid] < k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(){
    int arr[7] = {1,5,5,7,8,8,9};
    int s = last_occ(arr, 7, 8);
    cout << s << endl;

}