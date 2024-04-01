#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout << "capacity = "<< v.capacity()<<endl;
    v.push_back(5);
    cout << "capacity = "<< v.capacity()<<endl;
    v.push_back(10);
    cout << "capacity = "<< v.capacity()<<endl;
    cout << "size = "<< v.size()<<endl;
    v.push_back(15);
    v.push_back(20);
    cout << "capacity = "<< v.capacity()<<endl;
    cout << "size = "<< v.size()<<endl;
    cout << "element at 2nd index is: "<< v.at(2)<< endl;
    cout << "1st element is: "<< v.front()<< endl;
    cout << "last element is: "<< v.back()<< endl;
    cout << "before pop vector = ";
    for(int i:v){
        cout << i<<" ";
    }cout << endl;
    v.pop_back();
    cout << "after pop vector = ";
    for(int i:v){
        cout << i<<" ";
    }cout << endl;
    // clearing the cector reduce the size of the vector but the capacity reamains same.
    cout << "before clear the vector size = "<< v.size()<< endl;
    cout << "before clear the vector capacity = "<< v.capacity()<< endl;
    v.clear();
    cout << "after clear the vector size = "<< v.size()<< endl;
    cout << "after clear the vector capacity = "<< v.capacity()<< endl;

    // initializing in a different way
    vector<int> a(5, 2);
    cout << "a: ";
    for(int i:a){
        cout<< i << " ";
    }cout << endl;

    // coping a vector into another vector
    vector<int> b(a);
    cout << "b: ";
    for(int i:b){
        cout << i << " ";
    }cout << endl;


}