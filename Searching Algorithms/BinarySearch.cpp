#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int size, int key){
    int s = 0;
    int e = size-1;
    while(s<=e){
    int mid = s+(e-s)/2;

    if(key==arr[mid]){
        return true;
    }
    else if(key< arr[mid]){
        e = mid-1;
    }else{
        s = mid+1;
    }
}
  
    return false;
}

int main(){

    int arr[10] = {1,3,4,5,6,7,8,9,10,40};
    cout << "Enter the no to search for :"<< endl;
    int key;
    cin >> key;

    bool ans = BinarySearch(arr,10,key);
    if(ans){
        cout << "Key is found"<< endl;
    
    }else{
        cout << "Key is not found" << endl;
    }
    return 0;
}