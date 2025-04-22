#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Binary (32-bit two's complement) is: ";
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        cout << bit;
    }

    cout << endl;
    return 0;
}
// Enter the value of n: -5
// Binary (32-bit two's complement) is: 11111111111111111111111111111011