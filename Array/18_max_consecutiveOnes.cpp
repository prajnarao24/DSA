//leet 485
/*
Keep a counter!
→ When you see 1 → counter++
→ When you see 0 → reset counter to 0
→ Keep track of maximum counter!

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    int maxcount=0;
    cout<<"enter no of array elemets";;
    cin>>n;
    int arr[n];
    cout<<"enter arrray";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxcount=max(count,maxcount);
        }
        else{

            count=0;
        }
        
    }

cout<<"max:"<<maxcount;
}