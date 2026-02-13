#include <iostream>
#include <climits>
using namespace std;


int getMax(int arr[], int size)
{

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int n;
    cout<<"Enter a Array Lenght: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr, n);
    int ans = getMax(arr, n);
    cout<<"This is the Maximam Value: "<<ans<<endl;

    int ans2 = getMin(arr, n);

    cout<<"This is the Minimum Value: "<<ans2<<endl;



}