//array is sorted-leet 167


#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter no of array elemets";;
    cin>>n;
    int arr[n];
    cout<<"enter arrray";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter target";
    cin>>target;

    int l=0;int r=n-1;
    while(l<r){
       sum=arr[l]+arr[r];
       if(sum==target){
        cout<<l+1<<" "<<r+1;
        return 0;
       }
       else if(sum<target){
        l++;
       }
    else {
        r--;
    }  
 }

}