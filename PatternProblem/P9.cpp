#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter the value of N : " << endl;
    cin >> N;
    int i = 1;
    while (i <= N)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value<<" " ;// alternatively use (i-j+1) insted of value.
            value--;
            j++;
        }
        cout << " " << endl;
        i++;
    }
}
// Enter the value of N : 
// 4
// 1  
// 2 1  
// 3 2 1  
// 4 3 2 1 