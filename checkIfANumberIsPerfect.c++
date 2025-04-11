#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    int sum = 0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }

    if(sum==num){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}