/*Logic

A prime number is a number that has exactly two factors:

1 and itself

Take a number n.
Count how many numbers divide n exactly.
If the count is 2, then it is a prime number.
Otherwise, it is not a prime number.
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    int count=0;
    cout<<"enter num";
    cin>>num;

    for(int i=1;i<=num;i++){
        if((num%i)==0){
            count++;
        }
    }
    if(count==2)
        cout<<"prime";
    
    else
        cout<<"not prime";
    
}