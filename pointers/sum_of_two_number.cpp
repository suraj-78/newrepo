#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    int *p1=&a;
    int *p2=&b;
    cout<<"The sum of a and b is "<<*p1 + *p2;

}