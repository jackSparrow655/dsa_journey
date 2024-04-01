#include <bits/stdc++.h>
using namespace std;

class student{
    private:
    string name;
    int roll;
    char level;

    public:
    //getting the value using gater fun
    string getname(){
        return name;
    }
    int getroll(){
        return roll;
    }
    char getlevel(){
        return level;
    }

    //setting the value using seter fun
    void setname(string n){
        name = n;
    }
    void setroll(int n){
        roll = n;
    }
    void setlevel(char a){
        level = a;
    }

};

int main(){
    student arijit;
    // arijit.name = "arijit";
    arijit.setname("arijit");
    // arijit.roll = 24;
    arijit.setroll(24);
    // arijit.level = 'A';
    arijit.setlevel('A');
    // cout << sizeof(arijit) << endl;
    // cout << arijit.roll << endl;
    cout <<"name of the student is: " << arijit.getname() << endl;
    // cout << arijit.level << endl;
    cout <<"level of the student is: " << arijit.getlevel() << endl;
    // cout << arijit.name << endl;
    cout <<"roll of the student is: " << arijit.getroll() << endl;
}