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
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"The sum of all elements of array is :"<<sum;
}