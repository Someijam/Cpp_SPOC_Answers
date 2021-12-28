#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,n,s,x,i,j;//看看a是不是整数
    cin>>a>>n;
    s=0;
    for(i=1;i<=n;i++)
    {
        x=0;
        for(j=1;j<=i;j++)
        {
            x=x+a*pow(10,j-1);
        }
        s=s+x;
    }
    cout<<"s="<<s<<endl;
    return 0;
}