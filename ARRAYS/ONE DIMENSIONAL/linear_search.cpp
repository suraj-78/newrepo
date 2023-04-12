#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n; i++){
        cout<<"Enter the element of array "<<i+1<<endl;
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the vlaue you want to search";
    cin>>x;
    bool found=0;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            found =1; 
            break;
        }
    }
    if(found){
        cout<<"Element found";
    }
    else cout<<"Element not found";
}