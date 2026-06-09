/*
Find minimum element from unsorted 
swap it with beginning

arr={5,3,8,1}

pass1:
find minimum=1
swap with first:{1,3,8,5}

pass2:
find minimum from {3,8,5}=3
swap with 2nd element->{1,3,8,5}

pass3:
find minimum from {8,5}=5
swap with 3rd element->{1,3,5,8}

sorted!


*/

#include<iostream>
using namespace std;
 void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minIndex=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
        
        }
    }
 }