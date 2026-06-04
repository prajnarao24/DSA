/*Logic of GCD of Two Numbers

Suppose the numbers are 12 and 18.

Find the largest number that divides both numbers exactly.
Common divisors of 12 and 18 are:
1,2,3,6
The greatest among them is 6.
Therefore, GCD = 6.
*/

/*
Find the remainder of a % b.
Replace a with b.
Replace b with the remainder.
Repeat until b becomes 0.
The value left in a is the GCD.
*/

#include<iostream>
using namespace std;

int main(){
    int a,b,temp;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    while(b>0){
    temp=b;
    b=a%b;
    a=temp;
    }
    cout<<a;
}
