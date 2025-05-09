#include<iostream>
using namespace std;

int firstocc(int arr[],int size, int key){
    int s = 0;
    int e = size-1;
    int ans = -1;
    while(s<=e){
    int mid = s+(e-s)/2;

    if(key==arr[mid]){
        ans = mid;
        e = mid-1;
    }
    else if(key< arr[mid]){
        e = mid-1;
    }else{
        s = mid+1;
    }
     
}
  
    return ans;
}

int lastocc(int arr[],int size, int key){
    int s = 0;
    int e = size-1;
    int ans = -1;
    while(s<=e){
    int mid = s+(e-s)/2;

    if(key==arr[mid]){
        ans = mid;
        s = mid+1;
    }
    else if(key< arr[mid]){
        e = mid-1;
    }else{
        s = mid+1;
    }
    
}
  
    return ans;
}

int main(){

    int size;
    cout << "Enter the size of array : " <<endl;
    cin >> size;
    int arr[100];
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Enter the no to search for :"<< endl;
    int key;
    cin >> key;

    cout<< "First Occurance is at "<< firstocc(arr,size,key) << endl;
    cout<< "Last Occurance is at " << lastocc(arr,size,key) << endl;
   

    return 0;
}