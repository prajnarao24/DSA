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
    
    while(l<r){                      //input fot loop:O(n),output=O(n),swap=O(n/2) s n+n+n/2=2n+(n/2)=n
        swap(arr[l],arr[r]);        //it swaps 1/2 of total so n/2, in big O we drop constant so time complexity:O(n)
        l++;                        //we're not creating new array,so space complexity is O(1), if we used other array then O(n)
        r--;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

}