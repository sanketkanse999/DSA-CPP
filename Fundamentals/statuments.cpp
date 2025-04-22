#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5)
            break;
        cout << i << " ";
    }
    return 0;

    for (int i = 0; i < 10; i++) {
        if (i == 5)
            continue;
        cout << i << " ";
    }
    return 0;


}

// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "Hello\n";
//     return; // exits the function here
//     cout << "This won't be printed\n";
// }

// int main() {
//     greet();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0;
// start:
//     if (i < 5) {
//         cout << i << " ";
//         i++;
//         goto start;
//     }
//     return 0;
// }



// #include <iostream>
// #include <cstdlib> // for exit()
// using namespace std;

// int main() {
//     cout << "Before exit\n";
//     exit(0); // program stops here
//     cout << "This won't be printed\n";
//     return 0;
// }



// Statement | Use Case | Behavior
// break | Exit loop or switch early | Stops loop/switch
// continue | Skip current loop iteration | Goes to next iteration
// return | Exit from a function | Returns control to caller
// goto | Jump to a labeled statement | Unstructured jump
// exit() | Terminate the program | Ends program execution