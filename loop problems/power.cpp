#include<iostream>
using namespace std;
int main(){
    int a,b,c=1;
    float d;
    cout<<"Enter the value of a,b";
    cin>>a>>b;
    if(b>=0){
        for(int i=1; i<=b; i++){
            c*=a;
        }
        cout<<"a raised to power b"<<" is :"<<c;
    }
    else{
        for(int i=1; i<=(-b); i++){
            c*=a;
            d=(float)1/c;
        }
        cout<<"a raised to power b is :"<<d;
    }
}