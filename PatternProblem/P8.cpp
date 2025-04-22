#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N : "<< endl;
    cin >>N;
    int i = 1;
    while(i<=N){
        int j = 1;
        int value = i;
        while(j<=i){
            
            cout << value<<" ";// alternative use(i+j-1) insted of value
          value++;
            j++;
            
        }
        cout << " " << endl;
        i++;
    }
}
// Enter the value of N : 
// 5
// 1  
// 2 3  
// 3 4 5  
// 4 5 6 7  
// 5 6 7 8 9  