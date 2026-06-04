/*An Armstrong number is a number that is equal to the sum of the cubes of its digits (for a 3-digit number).

Example:

153 = 1³ + 5³ + 3³
    = 1 + 125 + 27
    = 153

So, 153 is an Armstrong number.Take a number as input.
Extract each digit using % 10.
Find the cube of the digit and add it to sum.
Remove the last digit using / 10.
Repeat until all digits are processed.
If sum == original number, it is an Armstrong number.
*/

#include<iostream>
using namespace std;

int main(){
    int num;
    
    int sum=0;
    cout<<"enter num";
    cin>>num;
    int temp=num;
    while(num>0){
        int d=num%10;
        sum=sum+d*d*d;
        num=num/10;
    }
    if(temp==sum){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong number";
    }
}