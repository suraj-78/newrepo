#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int digit(int a){
    int count=0;

    while(a!=0){
        count+=1;
        a=a/10;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter your number";
    cin>>n;
    cout<<"Number of digits is :"<<digit(n)<<endl;
    cout<<"Square of the number is :"<<square(n);

}