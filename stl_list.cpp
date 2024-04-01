#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> m(6, 100);
    l.push_back(5);
    l.push_back(15);
    for(int i: l){
        cout << i << " ";
    }cout << endl;

    for(int i: m){
        cout << i << " ";
    }cout << endl;
    
}