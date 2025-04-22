#include<iostream>
using namespace std;

int setbit(int n){
    
    int count = 0;
    for(int i=31; i>0; i--){
        if(n&1==1){
            count++;
            n = n>>1;
        }else{
            n = n>>1;
        }
    }
    return count;
}

int main(){

    int a;
    cout << "Enter the value of a : "<< endl;
    cin>>a;
    int b;
    cout << "Enter the value of b : "<< endl;
    cin>>b;

    int Count = setbit(a)+ setbit(b);

    cout <<"Total number of set bit is : "<< Count<<endl;

    return 0;

}