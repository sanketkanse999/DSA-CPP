# include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the characher ch : "<< endl;
    cin >> ch;
    if(ch>='A'&& ch<='Z'){
        cout << " Letter is UPPER CASE"<< endl;
    }else if(ch >='a'&& ch <='z'){
        cout << " letter is in LOWER CASE" << endl;
    }else if(ch >='0'&& ch<='9'){
        cout << " It is the digit" << endl;

    }else{
        cout << "neiter digit or letter"<< endl;
    }
}