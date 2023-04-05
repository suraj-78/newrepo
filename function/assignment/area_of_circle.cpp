#include<iostream>
using namespace std;
float area(int r){
    float area = 3.14*r*r;
    return area;
}
int main(){
    int n;
    cout<<"Enter the value of radius";
    cin>>n;
    cout<<"area of circle is :"<<area(n);

}