//SPOC3-2
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c;
    double p,area;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    {
        p=(a+b+c)/2;
        area=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<"area="<<setiosflags(ios::fixed)<<setprecision(2)<<area<<endl;
        if(a==b&&a==c)cout<<"等边三角形"<<endl;
        else if(a==b||b==c||a==c)
            {
                if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))cout<<"等腰直角三角形"<<endl;
                else cout<<"等腰三角形"<<endl;
            }
        else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))cout<<"直角三角形"<<endl;
        else cout<<"一般三角形"<<endl;
    }else{
        cout<<"不构成三角形"<<endl;
    }
    return 0;
}