#include<iostream>
using namespace std;

int AP(int n){

    return ((n*3)+7);
}

int main(){

    int n;
    cout << "Enter the value of n : "<< endl;
    cin >> n;

    int ans = AP(n);

    cout << "Nth term of AP is : "<< ans << endl;
    
    return 0;
}

