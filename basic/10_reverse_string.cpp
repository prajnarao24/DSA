#include<iostream>
using namespace std;

int main(){
    string s="prajna";
    int n=s.length();
    int l=0;
    int r=n-1;

    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--; 
    }

    cout<<s;
    return 0;

}