#include<bits/stdc++.h>
using namespace std;
class human { 
    public:
    int hight;
    int age;
    int weight;

    int getHight(){
        cout << "hight is: " << hight << endl;
    }
    void setHIght(int data){
        this->hight = data;
    }
};

class Male: public human{
    public:
    string color;

    void sleeep() {
        cout << "he is sleeping " << endl;
    }
};

int main(){
    Male arijit;
    // cout << arijit.color << endl;
    cout << arijit.hight << endl;
    arijit.setHIght(10);
    cout << arijit.hight << endl;
    // cout << arijit.weight << endl;
    // cout << arijit.age << endl;
}