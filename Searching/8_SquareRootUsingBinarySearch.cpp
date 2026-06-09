/*

leet-69

n=25
l=1
r=25

mid=13
13*13=169>25 so search left r=mid-1

r=12,l=1
mid=6
6*6=36>25 so search left r=mid-1

r=5,l=1
mid=3
3*3=9<=25 true so search right l=mid+!

r=5,l=4
mid=4
16<=25 true so search right l=mid+1 and ans=4

r=5,l=5
25<=25 true search  right l=mid+! ans=5

r=5,l=6 stop
return ans

*/

#include<iostream>
using namespace std;

int sqrtt(int n){
    int l=1;
    int r=n;
    int ans=0;

    while(l<=r){
        long long mid=l+(r-l)/2;

        if(mid*mid<=n){
            ans=mid;
            l=mid+1;               //search right side
        }
        else{
            r=mid-1;               //search left
        }

    }
    return ans;
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<"sq root:"<<sqrtt(n);
    return 0;
}