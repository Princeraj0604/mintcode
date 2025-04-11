#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of Array:";
    cin>>size;
    int *arr = new int[size];

    cout<<"Enter the element of the array:";
    for(int i=0;i<size;i++){
    cin>>arr[i];
}

int sum = 0;
for(int i=0;i<size;i++){
    sum +=arr[i];
}
cout<<"Sum of Array Elements:"<<sum<<endl;
return 0;

}
