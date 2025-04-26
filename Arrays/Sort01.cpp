#include<iostream>

using namespace std;

int PrintArray(int arr[], int size){

    for(int i=0; i< size;i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}

int Sort01(int arr[], int size){

    int i = 0;
    int j = size-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }else if(arr[j]==1){
            j--;
        }else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return 0 ;
}
int main(){

    int arr[10];
    cout << "Enter the values to insert in the array : " << endl;
    for(int i = 0 ;i<10;i++){
        cin>> arr[i];
    }
    cout << "Input Array : ";
    PrintArray(arr,10);
    Sort01(arr,10);
    cout << "Sorted Array : ";
    PrintArray(arr,10);

    return 0;

}