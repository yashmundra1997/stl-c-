#include<vector>
#include<iostream>
using namespace std;
int main()
{
vector<int> v;
v.push_back(10);
v.push_back(30);
v.push_back(20);
v.push_back(40);
v[8]=500;
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<endl;
}
cout<<"Size"<<v.size()<<"Capacity"<<v.capacity()<<"Maximum size:"<<v.max_size()<<endl;
v.resize(10);
cout<<"After resizing"<<endl;
cout<<"Size:"<<v.size()<<"Capacity:"<<v.capacity()<<"Maximum size:"<<v.max_size()<<endl;
v[8]=203;
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<endl;
}
cout<<"Iterating front to end"<<endl;
vector<int>::iterator fi=v.begin();
while(fi!=v.end())
{
cout<<*fi<<endl;
++fi;
}
cout<<"Iterating end to front"<<endl;
vector<int>::reverse_iterator ri=v.rbegin();
while(ri!=v.rend())
{
cout<<*ri<<endl;
*ri=*ri+10000;
++ri;
}
cout<<"After modifying through iterator"<<endl;
for(int i=0;i<v.size();++i)
{
cout<<v[i]<<endl;
}
v.clear();
v.push_back(10);
v.push_back(12);
v.push_back(15);
v.push_back(13);
cout<<"after clearing the vector and adding 4 elements to it"<<endl;
for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
cout<<"Creating a constant iterator(Through which value cannot be modified)"<<endl;
vector<int>::const_iterator cfi=v.cbegin();
while(cfi!=v.cend())
{
cout<<*cfi<<endl;
++cfi;
}
return 0;
}