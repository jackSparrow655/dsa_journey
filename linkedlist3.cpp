#include <bits/stdc++.h>
using namespace std;
string printLargest(vector<string> &arr) {
	    // code here
	    int s = 0;
	    int e = s+1;
	    while(s < arr.size()){
	        while(e < arr.size()){
	            string a = arr[s] + arr[e];
	            string b = arr[e] + arr[s];
	            int A = stoi(a);
	            int B = stoi(b);
	            if(A < B){
	                swap(arr[s], arr[e]);
	            }
	            e++;
	        }
	        s++;
	        e = s+1;
	        
	    }
	}

int main(){
    int a = 10;
    int b = 20; 
    int arr[5] = {1,2,3,4,5};
    string s = (to_string(arr[3]) + to_string(arr[4]));
    int x = stoi(s);
    cout << "string is: " << s << endl;
    cout << "integer is: " << x << endl;
}