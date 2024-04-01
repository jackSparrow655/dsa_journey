#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int N, int X)
    {
        
        // Your code here
        if(N == 0){
            return false;
        }
        if(arr[0] == X){
            return true;
        }
        else{
            return search(arr+1, N-1, X);
        }
        
    }

    int main(){
        int arr[5] = {5,3,4,1,2};
        bool a = search(arr, 5, 6);
        if(a == 1){
            cout << "value is present.";
        }
        else{
            cout << "value is not present";
        }
    }