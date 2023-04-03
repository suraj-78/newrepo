#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the vlaue of n";
    cin>>n;
    for(int i=1 ; i<=n; i++)
    {
        for(int j=1; j<=2*n-1; j++){
            if((i==j) || (i+j)==10 )
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    
}