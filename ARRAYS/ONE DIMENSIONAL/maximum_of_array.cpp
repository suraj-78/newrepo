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
    int x = arr[0];   // x= INT_MIN  // ye sabse minimum value 
    for(int i=0; i<n; i++){
        if(arr[i]>x) x= arr[i];
    }
   cout<<"Maximum vlaue present in the array is :"<<x;
}