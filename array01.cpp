#include<iostream>
using namespace std;
void print_arr(int array[], int n){
    for(int i = 0; i < 5; i++){
        cout << array[i] << endl;
    }
}
int main(){
    int first[5] = {5, 8, 2} ;
    print_arr(first, 5);
    
    

}