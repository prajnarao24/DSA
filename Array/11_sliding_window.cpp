/*maximum sum subarry of size k
input:{1,3,-1,-3,5,3} k=3
output=7

{1,3,-1}=3
{3,-1,-3}=-1
{-1,-3,5}=1
{-3,5,3}=5
here 7 is max
*/

//if we go one by one then it will taake time cmplexity:O(n*k)

//sliding window:remove first element and add new element

#include<iostream>
using namespace std;

int main(){
    int n,k;
    int sum=0;
    cout<<"enter no of array elemets";;
    cin>>n;
    cout<<"enter k";
    cin>>k;
    int arr[n];
    cout<<"enter arrray";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

       for(int i=0;i<k;i++){      //first window=0,1,2
        sum=sum+arr[i];
    }
    int maxSum=sum;

    for(int i=k;i<n;i++){
        sum=sum+arr[i];           //add 3rd index value
        sum=sum-arr[i-k];          //remove [3-3]=0th index
        maxSum=max(maxSum,sum);      
    }

cout<<"masum"<<maxSum;
return 0;
}