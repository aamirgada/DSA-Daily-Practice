#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    if(num <= 1){
        cout<<"Not prime";
        return 0;
    }

    bool isPrime = true;   // assume prime
    int i = 2;

    while(i < num){
        if(num % i == 0){
            isPrime = false;   // found divisor
            break;
        }
        i++;
    }

    if(isPrime)
        cout<<"Prime number";
    else
        cout<<"Not prime";
}
