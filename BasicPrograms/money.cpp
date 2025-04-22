#include<iostream>
using namespace std;
int main(){
    int Money;
    cout << "Enter the value of Money : " << endl;
    
    cin >> Money;
    int rupee100 =0;
    int rupee20 =0;
    int rupee1 = 0;
    int choice = 1;
    
    switch(choice){
        case 1: rupee100 = Money/100;
                Money%=100;

        case 2: rupee20 = Money/20;
                Money%=20;

        case 3: rupee1 = Money/1;
                break;
        
       default: cout << "Invalid Entry !!!"<< endl;
    }
    cout << "Total Notes : "<<endl;
    cout << "100rs : "<< rupee100 << endl;
    cout << "20rs : "<< rupee20 << endl;
    cout << "1rs : "<< rupee1 << endl;

}