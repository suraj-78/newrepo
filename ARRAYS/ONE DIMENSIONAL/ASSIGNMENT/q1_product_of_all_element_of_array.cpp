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
    int product=1;
    for(int i=0; i<n; i++){
        product*=arr[i];
    }
    cout<<"The product of all elements of array is :"<<product;
}