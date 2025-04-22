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
         while(j<=i){
            cout << a << " ";
            j++;
            a++;
         }
         cout << endl;
         i++;
         
    }
}
// Enter the value of N : 
// 5
// A 
// B C 
// C D E 
// D E F G 
// E F G H I 