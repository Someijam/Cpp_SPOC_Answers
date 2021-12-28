//SPOC3-3
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,r,s;
    cin>>n;
    if(n<1000)
    {
        r=0;
        s=n;
    }
    else if(n>=1000&&n<3000)
    {
        r=0.03;
        s=n-n*r;
    }
    else if(n>=3000&&n<5000)
    {
        r=0.05;
        s=n-n*r;
    }
    else if(n>=5000&&n<10000)
    {
        r=0.07;
        s=n-n*r;
    }
    else 
    {
        r=0.1;
        s=n-n*r;
    }
    cout<<"税率r="<<100*r<<"%,"<<"奖金值n="<<setiosflags(ios::fixed)<<setprecision(2)<<n<<","<<"实际所得奖金s="<<s<<endl;
    return 0;
}