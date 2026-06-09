//peek element=element greater than both its neighbors
/*
LEET-162

arr={1,2,3,1}
3>2
3>1 is 3 is peak

if arr[1]>arr[0] then 0th element is peak
if arr[n-1]>arr[n-2] then last element is peak

for middle:check both side left and right

if 2peaks are there then we can return any 1
*/

//linear search approch-O(n)

#include<iostream>
using namespace std;

int Peak(int arr[],int n){
    if(n==1){
        return 0;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    if(arr[n-1]>arr[n-2]){
        return n-1;
    }

    //for middle:
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=Peak(arr,n);
cout<<"peak index:"<<result;
cout<<"element:"<<arr[result];

    return 0;
}

//Binary search-O(logn)

/*
at every mid
check if arr[mid]>arr[mid+1]   ->peak is in left half(including mid)
 
if(arr[mid]<arr[mid+1])  ->peak is in right half

*/


#include<iostream>
using namespace std;

int Peak(int arr[],int n){
    int l=0;
    int r=n-1;

    while(l<r){
        int mid=l-(r-l)/2;
        if(arr[mid]>arr[mid+1]){
            r=mid;
        }
        else{
            l=mid-1;
        }
    }
    return 1;                     //here not -1, if l==r ->peak position

}

int main(){
      int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=Peak(arr,n);
cout<<"peak index:"<<result;
cout<<"element:"<<arr[result];

    return 0;

}