#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the value in array "<<i+1<<endl;
        cin>>arr[i];
    }
    bool found =0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
            found =1;
            break;
            }
        }
    }
    if(found ==1){
        cout<<"Duplicate is present";

    }
    else cout<<"Duplicate is not present";
}