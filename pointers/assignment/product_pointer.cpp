#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    int *p1=&a;
    int *p2= &b;
    cout<<"The product of a and b is :"<<(*p1) * (*p2);
    return 0;
}