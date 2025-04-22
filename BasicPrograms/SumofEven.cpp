#include<iostream>
using namespace std;

int main(){
    int N;
    cout <<"Enter the value of N: "<< endl;
    cin >> N;
    int sum =0;
    int i =2;
    while(i<=N){
        if(i%2==0){
        sum += i;
        i++;
        }
        else{
            i++;
        }
    }
    cout << "Sum of N number : " << sum << endl;
}