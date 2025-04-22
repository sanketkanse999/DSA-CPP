#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N : "<< endl;
    cin >> N;
    int i = 1;
    
    while(i<=N){
         int j = 1;
         char a = 'A'+4-i;
         while(j<=i){
            cout << a << " ";
            j++;
            a++;
         }
         cout << endl;
         i++;
         
    }
}