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

/*Set automatically stores
UNIQUE elements only!

→ Insert all elements of arr1 into set
→ Insert all elements of arr2 into set
→ Set removes duplicates automatically!
→ Print set!*/

    set<int>st;

    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }

     for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }

    cout<<"union";
    for(auto x:st){
        cout<<x<<endl;
    }

    cout<<"size:"<<st.size();

}