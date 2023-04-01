#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter no of columns";
    cin>>n;
    for(int i=1; i<=m; i++){
        if(i==1 || i==m){
            for(int j =1; j<=n; j++)
            cout<<"*";
        }
        else{
            for(int k =1; k<=n; k++)
            if(k==1 || k== n)
            cout<<"*";
            else cout<<" ";          
        }
        cout<<endl;
        
    }
}