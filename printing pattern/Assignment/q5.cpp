#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=1; i<2*n; i++){
        if(i<=n){
            for(int k=1; k<=i; k++){
                cout<<"*";
            }
        }
        else {
            for(int j=i; j<2*n; j++)
            cout<<"*";
        }
        cout<<endl;
    }

}