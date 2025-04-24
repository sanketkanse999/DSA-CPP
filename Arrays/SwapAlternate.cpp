#include<iostream>
using namespace std;
int PrintArray(int arr[], int size){

    for(int i=0;i<7;i++){
        cout << arr[i]<< " ";
    
    }cout << endl;
    return 0;
}

int SwapAlternate(int arr[],int size){
    
    int i = 0;
    while(i+1<size){
        //swap(arr[i],arr[i+1]);
        int temp = arr[i+1];
        arr[i+1]=arr[i];
        arr[i]= temp;
        i+=2;
    }
    return 0;
}




int main(){
    int arr[7];
    cout << "Enter the element to store in array "<< endl;

    for(int i=0;i<7;i++){
        cin>>arr[i];
    }

    cout<< "Input array : ";
    PrintArray(arr,7);

    SwapAlternate(arr,7);

    cout << "Output Array :";
    PrintArray(arr,7);

    return 0;
}