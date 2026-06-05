#include<iostream>
using namespace std;

int main(){
    int arr[]={22,36,4};
    int index;
    int size=sizeof(arr)/sizeof(arr[0]);
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
            index=i;
        }
    }
cout<<largest<<endl;
cout<<index;
}