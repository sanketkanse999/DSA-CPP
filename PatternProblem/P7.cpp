#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N : "<< endl;
    cin >>N;
    int i = 1;
    int count = 1;
    while(i<=N){
        int j = 1;
        while(j<=i){
            cout << count << " " ;
            count++;
            j++;
        }
        cout << " " << endl;
        i++;
    }
}
// Enter the value of N : 
// 4
// 1         
// 2 3       
// 4 5 6     
// 7 8 9 10  