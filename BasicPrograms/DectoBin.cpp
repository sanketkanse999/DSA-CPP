#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n!=0){
        
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;

        n = n >>1;
        i++;
    }
    cout << "Answer is " << ans << endl;
}

// for positive and negative 


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     cout << "Binary (32-bit two's complement) is: ";
//     for (int i = 31; i >= 0; i--) {
//         int bit = (n >> i) & 1;
//         cout << bit;
//     }

//     cout << endl;
//     return 0;
// }








// #include<iostream>
// #include<bitset>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     // 32-bit binary representation using two's complement
//     bitset<32> binary(n);  
//     cout << "Binary (32-bit two's complement) is: " << binary << endl;

//     return 0;
// }




// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     bool isNegative = false;
//     if(n < 0) {
//         isNegative = true;
//         n = abs(n);  // or n = -n;
//     }

//     int ans = 0;
//     int i = 0;
//     while(n != 0) {
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans;
//         n = n >> 1;
//         i++;
//     }

//     if(isNegative) {
//         cout << "Binary (of abs value) is: -" << ans << endl;
//     } else {
//         cout << "Binary is: " << ans << endl;
//     }

//     return 0;
// }

