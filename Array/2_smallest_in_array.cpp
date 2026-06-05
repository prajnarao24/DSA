#include<iostream>
using namespace std;

int main(){
    int arr[]={3,56,76,7};
    int index;
    int size=sizeof(arr)/sizeof(arr[0]);
    int smallest=INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            index=i;
        
        }
    }
cout<<smallest<<endl;
cout<<"Index:"<<index;

}