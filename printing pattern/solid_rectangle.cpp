#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the no. of stars you want in each row";
    cin>>a;
    cout<<"Enter the no. of rows";
    cin>>b;
    for(int i=1; i<=b; i++){
        for(int j =1 ; j<=a; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
