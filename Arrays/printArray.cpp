#include<iostream>
using namespace std;

int PrintArray(int arr[], int size){


    cout << "Printing the array : ";
    for(int i=0; i< size; i++){
        cout << arr[i] << " ";


    }
    cout << endl;
    return 0;
}
int main(){

    int arr[10] = {20,23};

    PrintArray(arr,10);

    return 0;
}

// diff types of arrays:
// 1) int arry[];
// 2) bool array[];
// 3) float array[];
// 4) char array[];