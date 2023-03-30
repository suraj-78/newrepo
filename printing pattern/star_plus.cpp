#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=1; i<=n;i++){
        if(i == n/2 + 1){
            for(int i = 1; i<= n ; i++){
                cout<<"*";
            }
        }
        else{
            for(int k = 1; k<=(n-1)/2; k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}
