#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=n; j>i; j--)
        cout<<" ";
        int first =1; 
        for(int k=0; k<=i;k++){
            cout<<first<<" ";
            first = first* (i-k)/(k+1);
        }
        cout<<endl;
    }
}