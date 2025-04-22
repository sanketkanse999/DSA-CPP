#include<iostream>
using namespace std;

int factorial(int num){

    int fact = 1;
    
    for(int i=1;i<=num;i++){
        fact = fact * i;

        
    }
    return fact;
}

int nCr(int n , int r){

    int num = factorial(n);
    int denom = factorial(r)*factorial(n-r);

    return num/denom ;
}
void oddeven(int c){

    cout << c << "- This " ;
    if(c==1)cout<< "Not Even nor Odd"<< endl;
    if(c&1==0){
        cout << "Number is Even "<<endl;
    }
    else{
        cout << "Number is Odd "<< endl;
}
    
}
int power(int a , int b){
    
     int ans = 1;;
     for(int i = 0; i<b ; i++){

        ans*=a;
        
        
     }
     return ans ;
}

int main(){
    int a;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    int b;
    cout << "Enter the value of b : " << endl;
    cin >> b;
    int c;
    cout << "Enter the value of c to check Even/Odd " << endl;
    cin >> c;

    int answer = power(a,b);
    cout << "Answer is : " << answer << endl;
    oddeven(c);
    int ncr = nCr(a , b);
    cout << "nCr is : "<< ncr << endl;
    

}