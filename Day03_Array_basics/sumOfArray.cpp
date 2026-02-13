#include<iostream>
using namespace std;

int main(){

    int arr[5] = {5, 10, 15, 20, 30};
    int sum=0;
    for(int i=0; i<5; i++){
        sum+=arr[i];
    }
    cout<<"Sum Of Array: "<<sum<<endl;
}
