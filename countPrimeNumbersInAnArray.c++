#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<=1) return false;
    
    for(int i=2;i<num;i++){
        if(num%i==0) return false;
    }
    return true;
}

int main(){
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int primeCount = 0;
    for(int i=0;i<size;i++){
        if(isPrime(arr[i])){
            primeCount++;
        }
    }
    cout<<"Number of prime numbers in the array:"<<primeCount<<endl;
    return 0;
}