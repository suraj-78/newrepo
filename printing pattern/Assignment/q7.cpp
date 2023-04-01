#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=n; j>i; j--)
    //     cout<<" ";
    //     for(int i=1; i<=n; i++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //METHOD 2 (using 2 loops)

    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-i; j++){
            if((i+j)<=n)
            cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
}