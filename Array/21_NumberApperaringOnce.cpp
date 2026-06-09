//3 approch,1 is Freq and other is XOR,another is sorting
//leet-136
//frequency
/*

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];

    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int freq[n+1]={0};
    for(int i=0;i<n;i++)    {
        freq[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(freq[i]==1){
            cout<<"single number"<<i;
        }
    }

}
*/


/*XOR:2 samenumber xor becomes 0,it will get canceled out
2^2=0
5^0=5
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];

    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int xorVal=0;
    for(int i=0;i<n;i++){
        xorVal=xorVal^arr[i];
    }
cout<<"single:"<<xorVal;
}
