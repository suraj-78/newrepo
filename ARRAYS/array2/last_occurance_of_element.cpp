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
    int x,occurance;
    cout<<"Enter the element you want to search";
    cin>>x;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==x) occurance=i;
    // }

    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x) 
        {occurance=i;
        break;}
    }
    cout<<"The last postition of the element is :"<<occurance;

}