#include<iostream>
using namespace std;



int main(){
    //declare an array
    int number[15];

    //accessing an array

   cout<<"Value at 6 "<<number[6]<<endl;

    //initialising an array

    int second[3] = {5,6,8};
    
   
    //accessing an array

   cout<<"Value at 2 : "<<second[2]<<endl;

    int third[15]= {8, 7};
   
    //print the array

    int n = 15;
    for(int i=0; i<n; i++){
        cout<<third[i];
    }
    cout<<endl;

    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"Size of array: "<<thirdsize<<endl;

    //initialising all locations with zero 0
    int fourth[10] = {0};
    

    n=10;
     //print the array
    for(int i=0; i<n; i++){
        cout<<fourth[i];
    }
    cout<<endl;

     int fifth[10] = {1};

    

    n=10;
     //print the array
    for(int i=0; i<n; i++){
        cout<<fifth[i];
    }


}