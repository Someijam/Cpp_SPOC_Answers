#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,s;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cin>>s;
    int flag=0;
    for(i=0;i<10;i++)
    {
        if(s==a[i])
        {
            cout<<i+1<<endl;
            flag=1;
        }
    }
    if(flag==0)cout<<"数组中没有该数"<<endl;
    return 0;
 } 