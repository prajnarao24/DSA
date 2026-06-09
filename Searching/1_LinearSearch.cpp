/*
complexity:
Best case:Found at first position=O(1)
Worst case: Found at last position=O(n)
Avg:O(n)
Space:O(1)
*/

#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
return -1;
}

int main(){

    int n,target;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"target";
    cin>>target;
    int arr[n];
    

    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=LinearSearch(arr,n,target);
    if(result!=-1){
        cout<<"found at"<<result;
    }
    else{
        cout<<"not found";
    }
    return 0;

    


}