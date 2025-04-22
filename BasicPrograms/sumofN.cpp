#include<iostream>
using namespace std;

int main(){
    int N;
    cout <<"Enter the value of N: "<< endl;
    cin >> N;
    int sum =0;
    int i =1;
    while(i<=N){
        sum += i;
        i++;
    }
    cout << "Sum of N number : " << sum << endl;
}