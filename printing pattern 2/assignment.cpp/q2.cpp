#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=1; i<=n; i++){
        int k=1;
        for(int j=1; j<n+i;j++){
            if(i+j<=n){
                cout<<" ";
            }
            else{
                cout<<char(k+64);
                k++;
            }
        }
        cout<<endl;
    }
}