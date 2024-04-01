#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int temp=n;
    int sum=0;
   
    while(n>0){
       int r=n%10;
       sum=r+sum*10;
        n=n/10;
        
    }
    
    if(temp==sum){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


}