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
    vector<int>v2(n);
    for(int j=0; j<n; j++){
        v2[j]= v[n-j-1];
    }
    cout<<endl<<"Array after reverse is :";
     for(int i=0; i<v.size();i++){
        cout<<v2[i]<<" ";
    }

    
}