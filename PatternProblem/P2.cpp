#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N: "<<endl;
    cin >> N;
    int i=1;
    while(i<=N){
        int j=1;
        while(j<=N){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}
// Enter the value of N: 
// 5
// 11111
// 22222
// 33333
// 44444
// 55555