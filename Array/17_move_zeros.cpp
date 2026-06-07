//leet 283
/*
j → points to position where 
    next non-zero should go
i → scans array for non-zero elements

When non-zero found at i:
→ place it at j
→ j++


We are using SWAP not just copy!

swap(arr[i], arr[j])
→ non-zero goes to j position
→ zero goes to i position!

Zeros are NOT deleted!
They get swapped to back automatically!

*/

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

    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }



return 0;
}