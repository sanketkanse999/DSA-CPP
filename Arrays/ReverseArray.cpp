#include<iostream>
using namespace std;
int PrintArray(int arr[], int size){

    for(int i=0;i<6;i++){
        cout << arr[i]<< " ";
    
    }cout << endl;
    return 0;
}

int ReverseArray(int arr[],int size){

    int start = 0;
    int end = size-1;

    while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
    }

    return 0;
}

int main(){
    int arr[6];
    cout << "Enter the element to store in array "<< endl;

    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

    cout<< "Input array : ";
    PrintArray(arr,6);

    ReverseArray(arr,6);

    cout << "Reversed Array :";
    PrintArray(arr,6);

    return 0;
}