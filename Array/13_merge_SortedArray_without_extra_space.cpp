/*
leeet-88

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout<<"enter 1st no of array elemets";;
    cin>>n1;
     cout<<"enter 2st no of array elemets";;
    cin>>n2;
    
    int arr1[n1+n2]={0};   //first initialize all to0
    cout<<"enter arrray";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    
    int arr2[n2];
    cout<<"enter arrray";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

int i=n1-1;
int j=n2-1;
int k=n1+n2-1;

while(i>=0&&j>=0){
    if(arr1[i]>arr2[j]){         //filling it from back so >
    arr1[k]=arr1[i];
    i--;
    k--;
}
else{
    arr1[k]=arr2[j];
    j--;
    k--;
}}
while(j>=0){
    arr1[k]=arr2[j];
    j--;
    k--;
}

for(int i=0;i<n1+n2;i++){
    cout<<arr1[i];
}
}