#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N : "<< endl;
    cin >> N;
    int i = 1;
    char a = 'A';
    while(i<=N){
         int j = 1;
        
         while(j<=N){
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
// A B C D E 
// F G H I J 
// K L M N O 
// P Q R S T 
// U V W X Y 
