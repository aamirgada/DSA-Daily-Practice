#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    int  sum=0;

    while (num!=0)
    {
        if(num%2==0){
        sum+=num;
        }
        num--;
    }

    cout<<"Sum of Numbers: "<<sum;
    
}