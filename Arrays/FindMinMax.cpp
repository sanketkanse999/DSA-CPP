#include<iostream>
#include<climits>
using namespace std;

int Min(int arr[], int size){

    int Minimum = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<Minimum){
            Minimum = arr[i];
        }
        //insted use  Minimum = min(Minimum,arr[i])
    }
    return Minimum;
}

int Max(int arr[], int size){

    int Maximum = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>Maximum){
            Maximum = arr[i];
        }
        //insted use Maximum = max(Maximum,arr[i])
    }
    return Maximum;
}
int main(){

    int size;
    cout << "Enter the size of array : " <<endl;
    cin >> size;
    int arr[100];
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }

    int Maximum = Max(arr,size);
    int Minimum = Min(arr,size);

    cout << "Maximum Element is : " << Maximum << endl;
    cout << "Minimum Element is : " << Minimum << endl;

    return 0;
}