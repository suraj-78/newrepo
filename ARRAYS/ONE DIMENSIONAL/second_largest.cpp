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
    int max = INT_MIN;   
    int secMax= INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max) max= arr[i];
        
    }
    for(int i=0; i<n; i++){
        if(arr[i]>secMax && arr[i]!=max) secMax= arr[i];
    }
   cout<<"Second Maximum vlaue present in the array is :"<<secMax;
}