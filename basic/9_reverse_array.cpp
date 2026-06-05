#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];

    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int l=0;
    int r=n-1;
    
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

}