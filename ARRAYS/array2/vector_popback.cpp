#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(7);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"Capacity is :"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"Capacity is :"<<v.capacity()<<endl;
    v.push_back(8);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"Capacity is :"<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"Capacity is :"<<v.capacity()<<endl;
    
    v.pop_back();
    v.pop_back();

} 
