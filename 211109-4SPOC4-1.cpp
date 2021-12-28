#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n;
    double s=0,h=100;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=s+h;//下落
        h=h/2;//上弹
        if(i==n)break;
        s=s+h;
    }
    
    cout<<"第"<<setiosflags(ios::fixed)<<setprecision(4)<<n<<"次落地时，共经过"<<s<<"米，反弹高度是"<<h<<"米。"<<endl;
    return 0;
}