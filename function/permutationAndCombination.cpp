#include <iostream>
using namespace std;

int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++)
    fact*=i;
    return fact;
}

float combination(int n, int r){
    float combination = factorial(n)/(factorial(r)*factorial(n-r));
    return combination;
}
int main(){
    int n,r;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Enter the value of r";
    cin>>r;
    cout<<"Value of "<<n<<"c"<<r<<" is :"<<combination(n,r);
}