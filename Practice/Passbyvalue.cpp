#include<iostream>
using namespace std;

int update(int a, int b){
    int ans = a*a;
     b = b+30;

    return ans;
}
int main(){

    int a = 14;
    int b = 20;
    a = update(a,b);
    cout << a << endl;
    cout << b << endl;

}