#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size, int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return 0;
}

int main(){

    int arr[10] = {1,3,4,5,6,7,8,9,10,40};
    cout << "Enter the no to search for :"<< endl;
    int key;
    cin >> key;

    bool ans = LinearSearch(arr,10,key);
    if(ans){
        cout << "Key is found"<< endl;
    
    }else{
        cout << "Key is not found" << endl;
    }
    return 0;
}