#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the vlaue of n";
    cin>>n;
    for(int i=1; i<=2*n+1; i++){
    for(int j=1;j<=2*n+1;j++){
        int a=i;
        int b=j;
        if(a>n+1) a=(2*n+2)-i;
        if(b>n+1) b=(2*n+2)-j;
        if(a+b==n+2 || b== n+1 || a==n+1){
            cout<<"*";
        }
        else cout<<" ";
    }
    cout<<endl;
    }
}