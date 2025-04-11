#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
        largest = arr[i];
        }

        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    cout<<"Largest:"<<largest<<",Smallest:"<<smallest<<endl;
    return 0;
}