#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the value in array "<<i+1;
        cin>>arr[i];
    }
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]< min)
        min = arr[i];
    }
    cout<<"Minimum of all the array is :"<<min;
}