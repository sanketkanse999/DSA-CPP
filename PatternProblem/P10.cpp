#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N : "<< endl;
    cin >> N;
    int i = 1;
    while(i<=N){
         int j = 1;
         char a = 'A'+i+j-2;
         while(j<=N){
            cout << a << " ";
            j++;
         }
         cout << endl;
         i++;
         
    }
}

// Enter the value of N : 
// 5
// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E 