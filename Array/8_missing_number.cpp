/*Array contains numbers from 0 to n
One number is missing

Sum of 0 to n = n*(n+1)/2

If we subtract actual array sum
from expected sum...
what do we get? 
*/

#include<iostream>
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

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
     int total=n*(n+1)/2;
    int missing=total-sum;
    cout<<missing;

}