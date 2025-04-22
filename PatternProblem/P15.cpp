#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N : " << endl;
    cin >> N;
    int i = 1;
    while(i<=N){
        int j = 1;
        int spaces = N-i;
        while(j<=spaces){
           cout << " " ;
           j++;

        }
        while(j<=N){
            cout << "*";
            j++;
        }
            cout << endl;
        i++;
    }
}
// Enter the value of N : 
// 5
//     *
//    **
//   ***
//  ****
// *****