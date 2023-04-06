#include<iostream>
using namespace std;
void swap(int *x, int *y){
    // int *temp = x;
    // *x=*y;
    // *y=*temp;
    // return;
    int temp;
    temp = *x;
    *x=*y;
    *y= temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"Value of a and b before swapping is :"<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"Value of a and b after swapping is :"<<a<<" "<<b;
}