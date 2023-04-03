#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=1; i<2*n; i++){
        
        for(int j=1; j<2*n; j++){
            int a=i;
            int b=j;
            if(i>n) a=2*n-i;
            if(j>n) b=2*n-j;
            if(a+b == n+1) cout<<"*";
            else cout<<" ";

        }
        cout<<endl;
    }
}