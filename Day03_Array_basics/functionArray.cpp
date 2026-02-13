#include<iostream>
using namespace std;

void printarry(int arr[], int size){
      
     //print the array
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    cout<<"Printing Done"<<endl;


}

int main(){

    int first[5]={0};
    
    printarry(first, 5);
}