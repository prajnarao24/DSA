/*RIGHT rotate:
Step 1 → reverse whole
Step 2 → reverse first k    ← k not k+1!
Step 3 → reverse remaining

LEFT rotate:
Step 1 → reverse first k    ← k not k+1!
Step 2 → reverse remaining
Step 3 → reverse whole

*/
#include<iostream>
#include<algorithm> //for sort
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];
    cout<<"enter k";
    int k;
    cin>>k;

    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    k=k%n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);

    /*
arr = {1, 2, 3, 4, 5}  k=2

Step 1 - reverse first 2:
{2, 1, 3, 4, 5}

Step 2 - reverse remaining 3:
{2, 1, 5, 4, 3}

Step 3 - reverse whole:
{3, 4, 5, 1, 2} */

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}