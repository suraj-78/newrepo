#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int p=1;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<2*n; j++){
            int a=i;
            int b=j;
            if(j>n) b=2*n-j;
            if(a+b == n+1) cout<<p;
            else cout<<" ";

        }
         p++;
        cout<<endl;
    }
}