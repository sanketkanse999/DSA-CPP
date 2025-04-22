#include <iostream>
using namespace std;

int x = 20;
int main() {

    // 1. Arithmetic Operators
    int a = 10, b = 3;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;
    
    // 2. Relational (Comparison) Operators
    cout << (a == b) << endl;  // 0 (false)
    cout << (a != b) << endl;  // 1 (true)
    cout << (a > b) << endl;   // 1 (true)
    cout << (a < b) << endl;   // 0 (false)
    cout << (a >= b) << endl;  // 1 (true)
    cout << (a <= b) << endl;  // 0 (false)

    // 3. Logical Operators
    cout << (a > 5 && b < 10) << endl;  // 1 (true)
    cout << (a > 15 || b < 10) << endl; // 1 (true)
    cout << !(a > 5) << endl;           // 0 (false)

    // 4. Bitwise Operators
    cout << (a & b) << endl;  // 1 (0001)
    cout << (a | b) << endl;  // 7 (0111)
    cout << (a ^ b) << endl;  // 6 (0110)
    cout << (~a) << endl;     // -6 (Two's complement)
    cout << (a << 1) << endl; // 10 (Left shift)
    cout << (a >> 1) << endl; // 2 (Right shift)

    // 5. Assignment Operators
    a += 5;  // a = a + 5
    cout << "a after +=: " << a << endl;

    a *= 2;  // a = a * 2
    cout << "a after *=: " << a << endl;
    

    // 6. Increment and Decrement Operators
    cout << "a++: " << a++ << endl;  // Outputs 5, then increments
    cout << "Now a: " << a << endl;  // Outputs 6
    cout << "++a: " << ++a << endl;  // Increments first, then outputs 7

    // 7. Ternary Operator
    int min = (a < b) ? a : b;
    cout << "Minimum: " << min << endl;

    // 8. Type Cast Operator
    double pi = 3.14159;
    int intPi = (int)pi;  // Type casting
    cout << "Integer part of pi: " << intPi << endl;

    // 9. Scope Resolution Operator (::)
    int x = 5;
    cout << "Local x: " << x << endl;
    cout << "Global x: " << ::x << endl;

    return 0;
}
