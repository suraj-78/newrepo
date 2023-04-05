#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=1; i<=a; i++)
    {
        // int fact=1;
        // for(int j=1; j<=i; j++){
        //     fact *=j;
        // }
        // cout<<"Factorial of "<<i<<" is : "<<fact<<endl;
        fact*=i;
        cout<<"Factorial of "<<i<<" is : "<<fact<<endl;
        
        

    }
}
int main(){
    int n;
    cout<<"Entert the value of n";
    cin>>n;
    fact(n);
}