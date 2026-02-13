#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){

        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }

    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){


    int even[6]= {5,7,8,16,19,12};
    int odd[5]={3,4,1, 18,99};

    swapAlternate(even, 6);
    swapAlternate(odd, 5);
    cout<<"Even Array swapped: ";
    printArray(even, 6);
    cout<<"Odd Array swapped: ";
    printArray(odd, 5);



}