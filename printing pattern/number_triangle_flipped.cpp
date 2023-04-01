#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j = n; j>i; j--){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=i; k++){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=n; i++){
        int a=1;
        for(int j = 1; j<=n; j++){
            if(i+j>= n+1){
            cout<<a;
            a++;
        }
        else cout<<" ";
        }
        cout<<endl;
    }
}