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

    
    int prefixSum[size];

    prefixSum[0] = arr[0];
    for(int i=1;i<size;i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    
    cout<<"Prefix Sum: [";
    for(int i=0;i<size;i++){
        cout<<prefixSum[i];
        if(i!=size-1)
        cout<<", ";
    }
    cout<<"]"<<endl;
    return 0;
}