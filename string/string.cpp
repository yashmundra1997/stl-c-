#include<iostream>
using namespace std;
int main()
{
string s,m,g;
cout<<"enter two string ";
cin>>s>>m;
cout<<s<<endl<<m;
string k=s+" "+m;
cout<<k<<endl;
cout<<(s==k)<<endl;
cout<<(s!=k)<<endl;
cout<<(s<k)<<endl;
string a[10];
for(int i=0;i<10;i++)
{
printf("enter string without spaces: ");
cin>>a[i];
}
for(int e=0;e<=8;e++)
{
for(int f=e+1;f<=9;f++)
{
if(a[f]<a[e])
{
g=a[f];
a[f]=a[e];
a[e]=g;
}
}
}
for(int i=0;i<10;i++)
{
cout<<a[i]<<endl;
}
return 0;
}