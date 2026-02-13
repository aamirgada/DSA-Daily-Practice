#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i=0; i<size; i++){

        if(arr[i]==key){
            return 1;
        }
    }
    return 0;


}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int key; 
    cout<<"Enter a key: ";
    cin>>key;

    int arr[10]={5, 6, 9, 10, 15 , 17, -34, 4,78, 25};

    printArray(arr, 10);

    int ans = search(arr, 10, key);

    if(ans){
        cout<<"Founded";
    }
    else{
        cout<<"Not Founded";
    }

    return 0;
}