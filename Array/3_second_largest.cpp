#include<iostream>
using namespace std;

int main(){
    int arr[]={3,56,64,76,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int first=INT_MIN;
    int second=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
            
    }

cout<<second;
}