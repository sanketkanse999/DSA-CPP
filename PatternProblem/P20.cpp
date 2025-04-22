#include<iostream>
using namespace std;
int main(){
    int N;
    cout << " Enter the value of N : " << endl;
    cin >> N;
    int i = 1;
    while(i<=N){
        int j = 1;
        while(j<=N){
            if(j<=N-i+1){
            cout << j ;
            j++;
           }else{
            cout << "*";
            j++;
           }
        }
        int start =i-1;
        while(start){
            cout << "*";
            start--;

        }start = N-i+1;
        while(start){
            cout << start;
            start--;
        }
        cout << endl;
        i++;
    }
}
// Enter the value of N : 
// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1