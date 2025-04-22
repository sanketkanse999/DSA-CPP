// #include<iostream>
// using namespace std;
// int main(){
//     int N;
//     cout << "Enter the value of N : " << endl;
//     cin >> N;
//     int i = 1;
//     int count =1;
//     while(i<=N){
//         int j = 1;
//         int spaces = N-i;
//         while(j<=spaces){
//            cout << " "<< " " ;
//            j++;

//         }
//         while(j<=N){
//             cout << count << " ";
//             j++;
//             count++;
//         }
//             cout << endl;
//         i++;
//     }
// }
// Enter the value of N : 
// 4
//       1 
//     2 3 
//   4 5 6 
// 7 8 9 10 





#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N : " << endl;
    cin >> N;
    int i = 1;
    int count =1;
    while(i<=N){
        int j = 1;
        int spaces = N-i;
        while(j<=spaces){
           cout << " "<< " " ;
           j++;

        }
        while(j<=N){
            cout << i << " ";
            j++;
            count++;
        }
            cout << endl;
        i++;
    }
}
// Enter the value of N : 
// 5
//         1 
//       2 2 
//     3 3 3 
//   4 4 4 4 
// 5 5 5 5 5 
