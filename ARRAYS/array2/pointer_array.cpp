#include<iostream>
using namespace std;
int main(){
    int arr[]= { 3,5,6,7,3,2,9};
    int *ptr= arr;
    cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // for(int i=0; i<7; i++){
    //     cout<<*ptr<<endl;
    //     ptr++;
    // }
    for(int i=0; i<7; i++){
        // cout<<i[ptr]<<endl;
        cout<<i[arr]<<endl;
        
    }
}