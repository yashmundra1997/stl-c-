#include<vector>
#include<iostream>
using namespace std;
int main()
{
vector<int> v(10);
v[0]=20;
v[1]=22;
v[2]=33;
v[3]=44;
for(int e=0;e<v.size();++e)
{
cout<<v[e]<<endl;
}
cout<<"Size:"<<v.size()<<"> Capacity"<<endl;
v.shrink_to_fit();
cout<<"After shrinking"<<endl;
cout<<"Size:"<<v.size()<<".Capacity"<<v.capacity()<<endl;
for(int e=0;e<v.size();++e)
{
cout<<v[e]<<endl;
}
v.resize(3);
cout<<"After resizing"<<endl;
cout<<"Size:"<<v.size()<<".Capacity:"<<v.capacity()<<endl;
for(int e=0;e<v.size();++e)
{
cout<<v[e]<<endl;
}
return 0;
}