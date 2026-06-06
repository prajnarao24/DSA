/*
Leeetcode:88

Input:
arr1={1,3,5,7}
arr2={2,4,6,8}

output:
{1,2,3,4,5,6,7,8}

Hint:Compare first of both,then smaller one becme first and then move pointer

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout<<"enter 1st no of array elemets";;
    cin>>n1;
    
    int arr1[n1];
    cout<<"enter arrray";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

     cout<<"enter 2st no of array elemets";;
    cin>>n2;
    int arr2[n2];
    cout<<"enter arrray";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int result[n1+n2];

    int i=0,j=0,k=0;

    //condition for comparing
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            result[k]=arr1[i];
            i++;
            k++;
        }
        else{
            result[k]=arr2[j];
            j++;
            k++;
        }

    }

    //for leftover in arr1,we have to add it to the end of result array
    while(i<n1){
        result[k]=arr1[i];
        i++;
        k++;
    }

    //for leftover in arr2,we have to add it to the end of result arry
    while(j<n2){
        result[k]=arr2[j];
        j++;
        k++;
    }

    cout<<"merged array:";
    for(int i=0;i<n1+n2;i++){
        cout<<result[i]<<" ";
    }
    return 0;


}