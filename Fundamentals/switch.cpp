#include<iostream>
using namespace std;
int main(){
    
    int N;
    cout << "Enter the value of N : " << endl;
    cin >> N;

    switch(N){

        case 1:cout << "First" << endl;
               break;
        
        case 2:cout << "Second" << endl;
               break;

        case 3:cout << "Third" << endl;
               break;
            
        case 4:cout << "Fourth" << endl;
               break;

        default: cout << "It is default Case " << endl;
    }
    return 0;
}