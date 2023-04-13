#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0 ; i<5; i++)
    cout<<a[i]<<" ";
}
void change(int b[]){
    b[0]= 19;
}
int main(){
    int arr[5]= {2,3,6,34,75};
    display(arr);
    change(arr);
    cout<<endl;
    display(arr);
}