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
    
    // Typecasting: Converting one data type to another
    // Implicit typecasting: Automatic conversion by the compiler
    float result1 = a + b; // Integer is implicitly converted to float
    cout << "Result of a + b (implicit typecasting): " << result1 <<
    endl;
    // Explicit typecasting: Manual conversion by the programmer
    int result2 = (int)b; // Float is explicitly converted to integer
    
    cout << "Result of (int)b (explicit typecasting): " << result2 << endl;

    int res = int(c); // Character is explicitly converted to integer (ASCII value)
    cout << "Result of int(c) (explicit typecasting): " << res << endl;

    return 0;
}