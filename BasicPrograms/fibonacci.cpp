#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "Enter the value of N : "<< endl;
    cin >> N;

    int a = 0;
    int b = 1;
    if(N==0){
        cout << a;}
   // cout << a << " " << b << " " ;
    for(int i=2;i<N-2; i++){
        int next = a+b;
        //cout << next << " ";
        a=b;
        b=next;
        
        
    }
    int n = a + b;
    cout << n ;

    cout << endl;
}