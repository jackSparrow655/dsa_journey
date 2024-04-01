#include<iostream>
using namespace std;
int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}
void sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j ++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    // sort(arr.begin(), arr.end());
}
int max_row(int arr[3][4], int n, int m){
    int max = INT32_MIN;
    int row_index = -1;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum = sum + arr[i][j];
        }
        if(sum > max){
            max = sum;
            row_index = i;
        }
        // cout << "the sum of the" << i + 1 <<"th row is: " << sum << endl;
    }
    cout << "maximus value of sum is: " << max <<endl;
    cout << "and the row index is: " << row_index;
    return row_index;
}
int deleted_sum(int arr[3][4], int row, int col){
    int ans = 0;
    for(int i = 0; i < row; i++){
        sort(arr[i], col);
    }
    cout << "sorted array is: "<< endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < col; i++){
        int mx = INT32_MIN;
        for(int j = 0; j < row; j++){
            mx = max(mx, arr[j][i]);
            // cout << arr[j][i] << endl;
        }
        ans += mx;
    }
    return ans;
}

void sum_rows(int arr[3][4], int n, int m){
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum = sum + arr[i][j];
        }
        cout << "the sum of the" << i + 1 <<"th row is: " << sum << endl;
    }

}

void search(int arr[3][4], int n, int m, int k){
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == k){
                cout << "present" << endl;
                cout << "rows = " << i << endl << "column = " << j <<endl;
                ans = 1;
                break;
            }
        }
    }
    if(ans == 0){
        cout << "not present" << endl;
    }
}

int main(){

    // initialising an 2D array

    int arr[3][4] = {3, 6, 2, 9, 11, 1, 5, 7, 10, 8, 12, 4};

    // taking input in the array
    // cout <<"enter the element of the array: ";
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // printing the values of the array

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // search(arr, 3, 4, 7);
    // sum_rows(arr, 3, 4);
    // max_row(arr, 3,4);
    int a = deleted_sum(arr, 3, 4);
    cout << a;


}