#include<iostream>
using namespace std;
int mini(int a, int b){
    if(a>b) return b;
    else return a;
}
int  main(){
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<mini(a,b);
}