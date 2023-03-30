#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the vlaue of n";
    cin>>n;
    int x,sum=0;
    while (n!=0){
        x = n%10;
        sum+=x;
        n/=10;
    }
    cout<<"The sum of the digits are : "<<sum;

}