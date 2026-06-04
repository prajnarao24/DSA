#include<iostream>
using namespace std;

int main(){
    int num;
    int sum=0;
    cout<<"enter num:";
    cin>>num;
    while(num>0){
        int d=num%10;
        sum=sum+d;
        num=num/10;
    }
    cout<<"sum of digits"<<sum;
}