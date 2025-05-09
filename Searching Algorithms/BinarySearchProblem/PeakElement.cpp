#include<iostream>
using namespace std;

int PeakElement(int arr[],int size){
    int s = 0;
    int e = size-1;
    while(s<e){
    int mid = s+(e-s)/2;

    if(arr[mid]<arr[mid+1]){
        s = mid+1;
    }
    else{
        e = mid;
    }
     
}
  
    return e;
}

int main(){

    int size;
    cout << "Enter the size of array : " <<endl;
    cin >> size;
    int arr[100];
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }
    int ans = PeakElement(arr,size);
    cout<< "Peak Element is "<< arr[ans] << " and at "<< ans << endl;
    
   

    return 0;
}