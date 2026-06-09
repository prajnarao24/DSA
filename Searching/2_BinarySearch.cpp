//Binary search works only on sorted arrays! ->O(logn)
//We'll divide the array
/*
{1,2,3,4,5,6},target=5
l=0,r=5
mid=2 i.e 3
5>3
so l=mid+1=3 i.e 4
mid=4+5/2=4
4>5
so l=4 i.e 5
mid=5+5/2=5
5=5 so return mid
*/

#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int target){
    int l=0;
    int r=n-1;

    while(l<=r){
        int mid=l+(r-l)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            l=mid-1;
        }

    }
    return -1;
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
