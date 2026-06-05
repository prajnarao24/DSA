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
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){      //{1,1,2,2,3,4,4,5}-> j=0 i.e, 1
            j++;                              //i=1 i.e, 1 and 1=1 so do nothing
            arr[j]=arr[i];                  // i=2 i.e 2, j=0 i.e 1 here 1 is not equal to 2, so j++ and change value of j to i {1,2,2,2,3,4,4,5}
        }                                   //i=3 i.e 2 , j=1 i.e 2, it is equal
    }                                       //i=4 i.e 3, j=1 i.e  2, not equal so do j++ and change value of j {1,2,3,2,3,4,4,5}
    cout<<"unique array:";
    for(int i=0;i<=j;i++){      //in leetcode:return j+1;(count)
        cout<<arr[i]<<" ";
    }                                      //i=5 i.e 4 ,j=2 i.e 3 j++ {1,2,}
                                          //i=6 i.e 4, j=2 i.e 3, j++ {1,2,}
}