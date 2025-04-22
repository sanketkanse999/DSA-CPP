#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter Number N: "<< endl;
    cin >> N;
    int sum = 0;
  
    for(int i=0;i<=N; i++){
        if(i%2!=0){
            sum += i;
           
        }
    }
    cout << "Sum of N odd number : "<< sum << endl;
}