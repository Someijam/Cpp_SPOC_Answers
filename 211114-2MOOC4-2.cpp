#include<iostream>
using namespace std;
int main ()
{
    int n,n1,x,s,s1;
    cin>>n;
    n1=n;
    if(n<10)cout<<'0'<<endl;
    else 
    {
        do{

            s1=0;
            if(n1==n)s=n;//第一次循环使n1=s=n
            for(n1=s;n1>0;n1/=10)
            {
                x=n1%10;
                s1=s1+x;
                s=s1;
            }

        }while(s>=10);
        cout<<s<<endl;
    }
    return 0;
}