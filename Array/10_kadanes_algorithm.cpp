/*find subarray with maximum sum
input=[-2,1,-3,4,-1,2,1,-5,4]
output:6->{4,-1,2,1}

leet 53

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter no of array elemets";;
    cin>>n;
    int arr[n];
    cout<<"enter arrray";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cursum=0;
    int max_sum=INT_MIN;

    for(int i=0;i<n;i++){
        cursum=cursum+arr[i];
        max_sum=max(max_sum,cursum);

    if(cursum<0){                     //here we have to reset if cursumbecomes negative
        cursum=0;                    
    }
}
cout<<"max sum="<<max_sum;
return 0;

}