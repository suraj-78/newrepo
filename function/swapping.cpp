#include<iostream>
using namespace std;
int main()
{
    int a,b; 
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"Number after swapping is "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Number after swapping is "<<a <<" "<<b;
}