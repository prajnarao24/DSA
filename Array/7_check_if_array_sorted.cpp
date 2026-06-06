#include<iostream>
using namespace std;

int main(){
    int n;
    bool sort=true;
    cout<<"enter no of array elemets";;
    cin>>n;
    int arr[n];
    cout<<"enter arrray";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sort=false;
        }
    }
    if(sort==true){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
}