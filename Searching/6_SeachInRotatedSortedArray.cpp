/*
leet-33
time:O(logn)
space:O(1)
Find mid
Even though whole array is not sorted,one half is always sorted
At any mid point,eithee left half is sorted or right half is sorted

if arr[mid]==target then return mid

check if left half sorted(arr[l]<=arr[mid])

if sorted then check if target is in left?
(target>=arr[l]&&target<arr[mid])
if yes then, r=mid-1;
             l=mid+!;


else not sorted then check if target is in right?
(target>arr[mid]&&target<=arr[r])
if yes then l=mid+1
            r=mid-1



*/


#include<iostream>
using namespace std;

int searchRotated(int arr[],int n,int target){
    int l=0;
    int r=n-1;

    while(l<r){
        int mid=l+(r-1)/2;
        if(target==arr[mid]){
            return mid;
        }
        if(arr[l]<=arr[mid]){
            //left half sorted

            if(target<arr[mid]&&target>=arr[l]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        //right half sorted
        else{
            if(target<=arr[r]&&target>arr[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }

        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter no of ele";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter target";
    cin>>target;

    int result=searchRotated(arr,n,target);
    if(result!=1){
        cout<<"found at"<<result;
    }
    else{
        cout<<"not found";
    }
    return 0;
}