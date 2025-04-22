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
        
        while(spaces){
           cout << " "<< " " ;
           spaces--;
        }
        while(j<=i){
            cout << j << " ";
            j++;
            
        }
        int start = i -1;
        while(start){
            cout << start << " ";
            
            start--;
        }
            cout << endl;
        i++;
    }
}

// Enter the value of N : 
// 5
//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 