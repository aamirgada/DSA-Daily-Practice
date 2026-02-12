#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter a character: ";
    cin>>a;
    if(a>='a' && a<='z'){
        cout<<a<<" is a lowercase letter."<<endl;
    }
    else if(a>='A' && a<='Z'){
        cout<<a<<" is an uppercase letter."<<endl;
    }
    else if(a>='0' && a<='9'){
        cout<<a<<" is a digit."<<endl;
    }
    else{
        cout<<a<<" is a special character."<<endl;
    }
}