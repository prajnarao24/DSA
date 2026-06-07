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
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int n,k;
cout<<"no of elements";
cin>>n;
cout<<"k value";
cin>>k;
cout<<"enter array ele";
vector<int>arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

k=k%n;
reverse(arr.begin(),arr.begin());            //reverse(arr, 0, n-1);( this is without vector)
reverse(arr.begin(),arr.begin()+k);       //reverse(arr, 0, k-1);
reverse(arr.begin()+k,arr.end());         //reverse(arr, k, n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}