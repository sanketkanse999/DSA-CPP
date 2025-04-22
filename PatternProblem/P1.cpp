#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N:"<<endl;
    cin >> N;

    int i=1;
    while(i<=N){
        int j=1;
        while(j<=N){
            cout << "*";
            j++;
        }
        cout <<endl;
        i++;
    }
}
// output:         Enter the value of N:
//                 5
//                 *****
//                 *****
//                 *****
//                 *****
//                 *****
