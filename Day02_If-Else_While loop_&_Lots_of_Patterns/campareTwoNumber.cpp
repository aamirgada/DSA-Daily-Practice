#include<iostream>
// #include<windows.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    int b; 
    cout<<"Enter the second number: ";
    cin>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<"Both numbers are equal."<<endl;
    }
}


