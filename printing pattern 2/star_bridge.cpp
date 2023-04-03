#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i==1){
            for(int j=1; j<2*n; j++)
            cout<<"*";
        }
        else{
            for(int p=n; p>=i; p--)
            cout<<"*";
            for(int q=3; q<2*i; q++)
            cout<<" ";
            for(int r=n; r>=i; r--)
            cout<<"*";
        }
        cout<<endl;
    }
    
}
