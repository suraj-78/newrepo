#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the vlaue of n";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int k=n; k>i; k--){
            cout<<" ";
            
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int l=i-1; l>=1; l--){
            cout<<l;
        }
        cout<<endl;
    }
    
    //Method 2
    // for(int i=1; i<=n; i++){
    //     for(int k=n; k>i; k--){
    //         cout<<" ";
            
    //     }
    //     int l=i-1;
    //     for(int j=1; j<2*i; j++){
    //         if(j<=i){
    //             cout<<j;
    //         }
    //         else{
    //             cout<<l;
    //             l--;
    //         }

    //     }
    //     cout<<endl;
    // }
}