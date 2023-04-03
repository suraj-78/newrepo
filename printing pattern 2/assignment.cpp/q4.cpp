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
            cout<<char(j+64);
        }
        else{
            for(int p=n; p>=i; p--){
            cout<<char(x+64);
            x++;
            }
            for(int q=3; q<2*i; q++){
            cout<<" ";
            x++;
            }
            for(int r=n; r>=i; r--){
            cout<<char(x+64);
            x++;
            }
        }
        cout<<endl;
    }
    
}
