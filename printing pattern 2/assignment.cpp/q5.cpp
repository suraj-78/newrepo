#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x=1;
        if(i==1){
            for(int j=1; j<2*n; j++)
            cout<<j;
        }
        else{
            for(int p=1; p<=n-i+1; x++){
            cout<<x;
            p++;
            }
            
            for(int q=3; q<2*i; q++){
            cout<<" ";
           
            }
            x=x-1;
            for(int p=1; p<=n-i+1; x--){
            cout<<x;
            p++;
            }
        }
        cout<<endl;
    }
    
}
