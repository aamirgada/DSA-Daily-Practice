#include<iostream>
using namespace std;

int main() {
    
    int a = 10; // Integer data type
    float b = 3.14; // Floating-point data type
    char c = 'A'; // Character data type
    bool d = true; // Boolean data type
    
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << d << endl;
    int sizeOfInt = sizeof(a);
    int sizeOfFloat = sizeof(b);
    int sizeOfChar = sizeof(c);
    int sizeOfBool = sizeof(d);
    cout << "Size of Integer: " << sizeOfInt << " bytes" << endl;
    cout << "Size of Float: " << sizeOfFloat << " bytes" << endl;
    cout << "Size of Character: " << sizeOfChar << " bytes" << endl;
    cout << "Size of Boolean: " << sizeOfBool << " bytes" << endl;
    
    return 0;
}