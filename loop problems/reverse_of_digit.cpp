#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int x,r=0;
    while(n!=0){
        r*=10;
        x = n%10;
        r = x + r;
        n/=10;
    }
    cout<<"The revere is : "<<r;
}