#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the N number: "<< endl;
    cin >> N;
    bool isPrime = true;
    if(N<2){
        isPrime = false;
    }
    else{
        for(int i=2; i<N ; i++){
            if(N%i==0){
                isPrime = false;
            }
        }
    }
    if(isPrime){
         cout << "It is Prime Number"<< endl;
    }
    else{
        cout << "It is Not Prime Number"<<endl;
    }
}