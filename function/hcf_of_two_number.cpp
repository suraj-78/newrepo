#include<iostream>
using namespace std;
int  hcf(int x, int y){
    int c;
    for(int i=1; i<= min(x,y);i++){
        if(x%i==0 && y%i==0){
            c=i;
        }
    }
    return c;
}
int main(){
    int a,b;
    cout<<"Enter two number a and b";
    cin>>a>>b;
    
    cout<<"HCF of "<<a<<" and "<<b<<" is :"<<hcf(a,b);
}
