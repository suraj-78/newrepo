#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int k=n; k>i;k--)
        cout<<" ";
        int k=1;
        for(int j=i; j>=2-i;j--){
            if(j>0){

                cout<<char(j+64);

            }
            else{
                cout<<char(k+65);
                k++;
            }
        }
        cout<<endl;
    }
}