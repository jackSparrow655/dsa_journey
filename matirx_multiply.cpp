#include<iostream>
#include<array>
#include<string>
using namespace std;
void multuply(int mat1[3][3], int mat2[3][3]){
    int arr[9] = {0};
    int k = 0;
    int a = 0;
   for(int i = 0; i < 3; i++){
    int c = 0;
    while(c < 3){
        k = 0;
        for(int j = 0; j < 3; j++){
            k = (mat1[i][j] * mat2[j][i]) + k;
        }
        arr[a] = k;
        a++;
        c++;
    }
   } 
   int count = 0;
   for(int i = 0; i < 9; i++){
    cout << arr[i]<<" ";
    count++;
    if(count % 3 == 0){
        cout << endl;
    }
    
   }

}

int main(){
    int x[3][3] = {};
    int y[3][3] = {};
    for(int i = 0; i < 3; i++){
        cout << "enter the value of x matrix of " << i+1 << " row: " << endl << endl;
        for(int j = 0; j < 3; j++){
            cout << "enter the value of x matrix of " << j+1 << " column: ";
            cin >> x[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        cout << "enter the value of y matrix of " << i+1 << " row " << endl << endl;
        for(int j = 0; j < 3; j++){
            cout << "enter the value of y matrix of " << j+1 << " column: ";
            cin >> y[i][j];
        }
    }

    multuply(x,y);

}