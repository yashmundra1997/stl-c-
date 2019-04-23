#include<vector>
#include<iostream>
using namespace std;
int main()
{
vector<int> v;
v.push_back(220);
v.push_back(221);
v.push_back(222);
v.push_back(223);
v.push_back(224);
for(int i=0;i<v.size();++i) cout<<v[i]<<endl;
v.pop_back();
cout<<"After poping from back"<<endl;
for(int i=0;i<v.size();++i) cout<<v[i]<<endl;
cout<<"creating a vector of size 3 populated with 100 as value of each element"<<endl;
vector<int> vv(3,200);
for(int i=0;i<vv.size();++i) cout<<vv[i]<<endl;
vv[0]=100;
vv[2]=300;
cout<<"After changing data"<<endl;
for(int i=0;i<vv.size();i++) cout<<vv[i]<<endl;
cout<<"Data at front"<<vv.front()<<endl;
cout<<"Data at back"<<vv.back()<<endl;
vv.push_back(400);
vv.push_back(500);
vv.push_back(600);
vv.push_back(700);
vv.push_back(800);
cout<<"After appending more data"<<endl;
for(int i=0;i<vv.size();i++) cout<<vv[i]<<endl;
vv.erase(vv.begin()+2);
cout<<"after erasing 3rd element"<<endl;
//for(int i=0;vv.size();++i) cout<<vv[i]<<endl;
vv.erase(vv.begin()+1,vv.begin()+5);
cout<<"After erasing 2nd,3rd and 4th element"<<endl;
for(int i=0;i<vv.size();++i) cout<<vv[i]<<endl;
vv.insert(vv.begin()+2,3000);
cout<<"After inserting 3000 at 3rd position"<<endl;
for(int i=0;i<vv.size();++i) cout<<vv[i]<<endl;
vv.insert(vv.begin()+2,5,6000);
cout<<"After inserting 6000,5 times from 3rd position"<<endl;
for(int i=0;i<vv.size();i++) cout<<vv[i]<<endl;
vector<int> k(3,300);
cout<<"Contents of vector k"<<endl;
for(int i=0;i<k.size();++i) cout<<k[i]<<endl;
k.swap(vv);
cout<<"After swapping k with vv"<<endl;
cout<<"Contents of vector k"<<endl;
for(int i=0;i<k.size();++i) cout<<k[i]<<endl;
cout<<"Contents of vector vv"<<endl;
for(int i=0;i<vv.size();++i) cout<<vv[i]<<endl;
return 0;
}