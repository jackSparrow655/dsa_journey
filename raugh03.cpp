#include<iostream>
using namespace std;
int isPalindrome(int x) {
        int n = x;
        // if(x < 0){
        //     return false;
        // }
        int ans = 0;
        int m = 1;
        while(n > 0){
            int digit = n % 10;
            ans = digit * m + ans;
            m *= 10;
            n = n / 10;
        }
        return ans;
        // if(x == ans){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        
    }
int main(){
    int x = 12156687;
    // if(isPalindrome(x)){
    //     cout << "palindrome.";
    // }
    cout << isPalindrome(x);
}