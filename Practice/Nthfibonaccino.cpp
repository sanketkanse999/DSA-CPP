#include<iostream>
using namespace std;

int fibonacci(int n){
    
    if(n <= 0){
       cout << "Invalid input! "<< endl;
       return 1;
    }
    if(n==1) return 0;
    if(n==2) return 1;

    int a = 0;
    int b = 1;
    
    int next = 0;
    for(int i=3;i<=n;i++){
        next = a+b;

        a = b;
        b = next;

    }
    return next ;
}

int main(){
    
    int n;
    cout << "Enter the value of n : "<< endl;
    cin >> n;
    
    int ans = fibonacci(n);

    cout << n << "th fibonacci number is : "<< ans << endl;

    return 0;
}