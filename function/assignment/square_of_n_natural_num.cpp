#include<iostream>
using namespace std;
int square(int a){
    for(int i=1; i<=a; i++){
        int sq= i*i;
        cout<<sq<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    square(n);

}