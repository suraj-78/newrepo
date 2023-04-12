#include<iostream>
#include<climits>
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
    cout<<"Enter the value of x";
    cin>>x;
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>x) count+=1;
        
    }
    
   cout<<"Number of element greater than "<<x<<" is "<<count;
}