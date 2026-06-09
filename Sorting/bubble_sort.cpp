//compare adjacent elements,if wrong order then swap
/*
arr={5,3,8,1}

pass1:
compare 5,3->swap -> {3,5,8,1}
compare 5,8->proper
compare 8,1->swap->{3,5,1,8}
after pass 1,dont touch 8

pass2:
compare 3,5 ->ok
compare 5,1->swap->{3,1,5,8}

pass3:
compare 3,1 ->swap->{1,3,5,8} done!
*/


//Best case:already sorted:O(n)
//Wost and avg-O(n square) -2 loop-O(n) and O(n),1 swap O(1)->O(n)*O(n)*O(1)=O(n square)
//space:O(1)

#include<iostream>
using namespace std;

void bubble(int arr[],int n){

    for(int i=0;i<n-1;i++){
        bool swapped=false;                  //first itis false, it is for already sorted inputs
        for(int j=0;j<n-i-1;j++){               //inner loop runs less each time ,no need to compare last element 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;                 //if any changes done,then it will change it to true
            } 
        }
        if(swapped==false){                       //for sorted it will remain false,so it will stop
            break;
        }
    }

}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubble(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}