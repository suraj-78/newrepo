#include<iostream>
using namespace std;
int factorial (int x){
    int fact=1; 
    for(int i=1; i<=x; i++)
    fact = fact*i;
    return fact;
}
int combination(int n,int r){
    int comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=n; j>=i+1; j--){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            int ncr=combination(i,k);
            cout<<ncr<<" ";
        }
        cout<<endl;
    }    
}