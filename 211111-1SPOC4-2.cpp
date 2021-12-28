#include <iostream>
using namespace std;
int main()
{
    int n,i;
    double s=0;
    cin>>n;
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            s=s+i*i;
        }
        s=s/n;
        cout<<"表达式的值="<<s<<endl;
    }
    else{cout<<"表达式的值="<<"0"<<endl;}
    return 0;
}