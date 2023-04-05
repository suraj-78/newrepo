#include<iostream>
using namespace std;
int odd(int a, int b){
    for(int i=min(a,b); i< max(a,b)-1; i++){
        {
            if((i+1)%2!=0){
                cout<<i+1<<endl;
            }
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"odd numbers between "<<a<<" and "<<b<< "is :"<<endl;
    odd(a,b);

}