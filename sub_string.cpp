#include<iostream>
using namespace std;

bool equal(int arr1[26], int arr2[26]){
    for(int i = 0; i < 26; i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

bool checkSub(string s1, string s2){
    int k = s1.length();
    int arr1[26] = {0};
    // int index = 0;
    for(int i = 0; i < k; i++){
        int index = s1[i] - 'a';
        arr1[index]++;
    }
    int arr2[26] = {0};
    int i =0;
    int n = s2.length();
    while(i < k && i < n){
        int index = s2[i] - 'a';
        arr2[index]++;
        i++;
    }
    if(equal(arr1, arr2) == 1){
        return 1;
    }
    while(i < n){
        int n_index = s2[i] - 'a';
        arr2[n_index]++;
        int old = s2[i - k] - 'a';
        arr2[old]--;

        if(equal(arr1, arr2)){
            return 1;
        }
        i++;
    }
    return 0;
}

int main(){
    string s1, s2;
    cout << "enter the sub_string: ";
    cin >> s1;
    cout << "enter the main string: ";
    cin >> s2;
    // string s1 = "ok";
    // string s2 = "arijitko";
    if(checkSub(s1,s2) == 1){
        cout << "present";
    }
    else{
        cout << "not present";
    }

}