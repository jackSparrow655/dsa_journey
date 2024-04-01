#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    public:
    int real;
    int imaginary;
    //parameterise constructor
    ComplexNumbers(int a, int b){
           this->real = a;
           this->imaginary = b;
    }
    void plus(ComplexNumbers c){
        this->real = this->real + c.real;
        this->imaginary = this->imaginary + c.imaginary;
    }

    void multiply(ComplexNumbers c){
        int x = this->real;
        int y = this->imaginary;
        this->real = ((x * c.real) - (y * c.imaginary));
        this->imaginary = ((x * c.imaginary)+(c.real * y));
    }
    void print(){
        if(this->imaginary != 1){
            cout << this->real <<" " <<"+"<<" "<<this->imaginary<<"i";
        }
        else{
            cout << this->real <<" " <<"+"<<" "<<"i";
        }
        
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;
    cout << "enter real and imaginary part of first complex: ";

    cin >> real1 >> imaginary1;
    cout << "enter real and imaginary part of second coplex: ";
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cout << "enter your choice(1->+, 2-> *): ";
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}