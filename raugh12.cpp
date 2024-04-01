#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int m = nums[n-1];
        if(n == 1) return nums[0];
        int *arr = new int[m];
        for(int i = 0; i < n; i++){
            int k = nums[i];
            arr[k]++;
        }
        int a = arr[0];
        for(int i = 0; i < m; i++){
            if(nums[i] > a) a = nums[i];
        }
        return a;
        
    }


int main(){
    vector<int> nums;
    int n;
    cout<< "enter the size: ";
    cin>> n;
    int f;
    for(int i = 0; i < n; i++){
        cin >> f;
        nums.push_back(i);
    }
    int x = majorityElement(nums);
    cout << "mejority element is: " << x << endl;
}