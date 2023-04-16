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

    int a,b;
    cout<<"Enter the index from where to where you want to reverse array";
    cin>>a>>b;
    for(int i=a, j=b; i<=j; i++, j--){
        int temp;
        temp = v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    cout<<endl<<"Array after reverse from index "<<a<<" and "<<b<<" is:";
     for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}