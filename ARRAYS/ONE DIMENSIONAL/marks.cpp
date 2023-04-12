#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the marks of student "<<i+1;
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<35){
            cout<<"Roll no. :"<<i+1<<endl;
        }
    }
}
