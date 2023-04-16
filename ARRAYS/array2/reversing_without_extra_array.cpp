#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int>v;
    for(int i=0; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Entered array is :";
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    for(int i=0; i<=n/2; i++){
        int temp;
        temp = v[i];
        v[i]=v[n-i-1];
        v[n-i-1]= temp;
    }
    cout<<endl<<"Array after reverse is :";
     for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
}