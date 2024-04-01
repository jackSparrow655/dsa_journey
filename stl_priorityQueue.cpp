#include<iostream>
#include<queue>
using namespace std;
int main(){
    // maxi...default
    priority_queue<int> maxi;

    // mini
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(4);
    maxi.push(6);
    maxi.push(2);
    maxi.push(0);
    maxi.push(10);
    cout << "size= "<< maxi.size()<< endl;
    int n = maxi.size();
    for(int i = 0; i < n; i++){
        cout<< maxi.top()<< " ";
        maxi.pop();

    }
    
}