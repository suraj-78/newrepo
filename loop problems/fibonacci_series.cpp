#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int a=1, b=1,c;
    cout<<"Fibonacci series is : "<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i = 3; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
    cout<<"nth element of the fibonacci series is : "<<c;

}