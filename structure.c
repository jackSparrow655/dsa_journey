#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
    char sec[1];
};

int main(){
    // entry of 1st student
    struct student s1;
    strcpy(s1.name, "Arijit");
    s1.roll = 24;
    s1.cgpa = 9.1;
    strcpy(s1.sec, "A");
    // entry of 2nd student
    struct student s2;
    strcpy(s2.name, "Avik");
    s2.roll = 26;
    s2.cgpa = 9.2;
    strcpy(s2.sec, "C");
    
    printf("Name of the student is %s\n", s1.name);
    printf("roll of the student is %d\n", s1.roll);
    printf("section of the student is %s\n", s1.sec);
    printf("cgpa of the student is %f\n", s1.cgpa);
    printf("\n");
    printf("Name of the student is %s\n", s2.name);
    printf("roll of the student is %d\n", s2.roll);
    printf("section of the student is %s\n", s2.sec);
    printf("cgpa of the student is %f\n", s2.cgpa);

    return 0;
}