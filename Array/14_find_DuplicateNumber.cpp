/*
array={1,3,4,2,2}
output:2
array contains number from 1-n and 1 number will have duplicate
*/

//Method 1:sort the array and check adjacent numbers,duplicate will come togather

#include<iostream>
#include<algorithm> //for sort
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

  //sort(start address,end address) AKA sort(arr[0],arr[n])
    sort(arr,arr+n);                    //sort STL complexity:O(nlogn)
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cout<<"duplicate:"<<arr[i];

        }
    }
return 0;

}

//Method 2:Frequency count ,whichever has frequency 2,it is duplicate, O(n)
//first we'll assign 0 to all fequency

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

    int freq[n+1]={0};             //create one freq array and assign 0
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        if(freq[arr[i]]==2){               //frequency of the value will get increased
            cout<<"duplicate:"<<arr[i];
        }
    }
    return 0;

}


//Floyd's cycle detection