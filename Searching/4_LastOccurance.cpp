/*
{1,2,2,2,3,4}
target=2
2's first occurance is at index 3


It is variation of Binary search,only 3 lines different from binary search
After dinding the target dont stop immediately,save the index and search right half of that
*/


#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int target){
    int l=0;
    int r=n-1;
    int ans=-1;                                        //declare ans

    while(l<=r){
        int mid=l+(r-l)/2;

        if(arr[mid]==target){
            ans=mid;                                 //save ans
            l=mid+1;                                //check right side
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            l=mid-1;
        }

    } 
     return ans;                                   //return ans
}

int main(){
    int n,target;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target";
    cin>>target;
    int result=BinarySearch(arr,n,target);

    if(result!=-1){
    cout<<"found at:"<<result;
}
else{
    cout<<"not found";
}
return 0;
}
