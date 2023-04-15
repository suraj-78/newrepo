#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int>v;
    cout<<"Enter the elements of the array";
    for(int i=0; i<n;i++){
        int p; 
        cin>>p;
        v.push_back(p);
    }
    int x,a,b;
    cout<<"Enter the value of x";
    cin>>x;
    for(int i=0; i<v.size(); i++){
        for(int j= i+1; j<v.size(); j++){
            if(v[i]+v[j]==x){
                a=v[i];
                b=v[j];
                cout<<"Doublet are:"<<a<<" and "<<b<<endl;
            }
        }
    }

}