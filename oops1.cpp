#include <bits/stdc++.h>
using namespace std;
class hero{
    public:
    int age;
    // public:
    // private:
    int health;
    char level;
    // hero(){
    //     cout << "constructor called" << endl;
    // }
    hero(int health, char level){
        this->health = health;//this is a pointer which store the current address of the object;
        this -> level = level;
        cout << "this is : " << this << endl;
    }

    hero(hero& a){
        cout << "coppy constrictor called" << endl;
        this->health = a.health;
        this->age = a.age;
        this ->level = a.level;
    }//there a default coppy constructor, whenever we create the coppy constructor manually the default constructor is deleted.

    public:
    char getlevel(){
        return level;
    }
    int getage(){
        return age;
    }

    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }
    void setage(int h){
        age = h;
    }
    void setlevel(char h){
        level = h;
    }
};
int main(){
    // static allocation
    hero a(10, 'a');
    cout << "address of a is: " << &a << endl;
    // a.setlevel('A');
    // a.sethealth(25);
    a.setage(20);
    cout << "a health is: " << a.gethealth() << endl;
    cout << "a level is: " << a.getlevel() << endl;
    cout << "a age is: " << a.getage() << endl;
    cout << endl;

    hero b(a);
    cout << "b health is: " << b.gethealth() << endl;
    cout << "b level is: " << b.getlevel() << endl;
    cout << "b age is: " << b.getage() << endl;
    cout << endl;


    

    // dynamic allocation
    // hero *b = new hero(20,'b');
    // cout << "address of b is: " << &b << endl;
    // (*b).setage(30);// b is a pointer and *b is the object 
    // b -> sethealth(40);// we may use here (*b).sethealth(40), same function
    // b -> setlevel('B');


    // cout << "b health is: " << (*b).gethealth() << endl;
    // cout << "b level is: " << (*b).getlevel() << endl;
    // cout << "b age is: " << (*b).getage() << endl;
    // cout << endl;

    // cout << "health is: " << b ->gethealth() << endl;
    // cout << "level is: " << b->getlevel() << endl;
    // cout << "age is: " << b->getage() << endl;

    
}