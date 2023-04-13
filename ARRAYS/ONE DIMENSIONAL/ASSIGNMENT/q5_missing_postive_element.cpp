#include<iostream>
using namespace std;
int main(){
    int arr[7]= { 2,3,4,5,7,8,9};
    int element;
    for(int i=0 ;i<7 ; i++){
        if(arr[i+1]!=(arr[i]+1)){ 
            element = arr[i]+1;
            break;
            }
    }
    cout<<"Missing element from it is "<<element;
}