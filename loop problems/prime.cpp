#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    bool flag = true;

    for(int i=2; i<n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number ";
            flag = false;
            break;
        }
    }
    if(n>2){
        if(flag == true){
            cout<<n<<" is a prime number ";
        }
    
    }
    else if( n ==2 ) cout<<2 <<" is a prime number ";
    else cout<<"1 is neither prime nor composite";
}