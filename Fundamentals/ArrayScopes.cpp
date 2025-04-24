#include<iostream>
using namespace std;

int update(int arr[], int size){

    cout << "Array in the update function" <<endl;

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";

    }
    cout <<endl;
    return 0;
}


int main(){

    int arr[10] = {1,2,5,3,4,6,7,0,9,10};
    
    arr[3]=33;
    update(arr,10);
    cout << "Array in main function" << endl;

    for(int i = 0; i<10;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
//note in the array the memory address is pass to the function so 
//all changes made in the function also reflect in the main array

// Pass by value only occur in the variable.