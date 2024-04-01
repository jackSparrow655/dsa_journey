#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(i < 5){
        int j = 0;
        while(j < i+1){
            cout << "*"<< " ";
            j += 1;
        }
        i +=1;
        cout <<" "<< endl;
    }

}