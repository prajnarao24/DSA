/*leet34
if first=1
last=3, count=last-first+1 
*/

#include<iostream>
using namespace std;

int FirstOccurance(int arr[],int n,int target){
    int l=0;
    int r=n-1;
    int ans=-1;

    while(l<=r){
        int mid=l+(r-l)/2;

        if(arr[mid]==target){
            ans=mid;   //save index
            r=mid-1;    //search left
            
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else{
            l=mid-1;
        }

    }
    return ans;                            //we have to retrn ans
}

int LastOccurance(int arr[],int n,int target){
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
    int first=FirstOccurance(arr,n,target);
    int last=LastOccurance(arr,n,target);

    if(first==1){
    cout<<"Not found";
}
else{
    cout<<"count"<<last-first+1;
}
return 0;
}
