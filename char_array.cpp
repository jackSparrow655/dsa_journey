#include<iostream>
# include<math.h>
using namespace std;
int length(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}
void reverse(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s++], arr[e--]);
    }
}
char lower(char ch){
    if(ch >='a' && ch <= 'z'){
        return ch;
    }
    else{
        ch = ch - 'A' + 'a';
    }
    return ch;
}
bool palindrome(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s < e){
        if('a'> arr[s]  || arr[e] > 'Z' ||arr[s] > 'z' || arr[e] < 'a' ||  )
        if(lower(arr[s]) != lower(arr[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
        return 1;
    }
}
int main(){
    char ch[20];
    // cout << "enter your name: ";
    // cin >> ch;
    // ch[3] = '\0';
    // cout << "your name is: "<< ch << endl;
    // int count = length(ch);
    // cout << "the length of the array is: " << count << endl;
    // reverse(ch, count);
    // cout << "reverse of the array is: "<< ch << endl;
    cout << "enter the specific word you wish to check: ";
    cin >> ch;
    int n = length(ch);
    if(palindrome(ch, n)){
        cout << "yes it is palindrome" << endl;
    }
    else{
        cout << "no it is not palindrome" << endl;
    }

}