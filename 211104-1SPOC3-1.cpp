//SPOC3-1
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
    double x,y;
    cin>>x;
    if(x<4) y=(x+7)/(2*x-1);
    else if(x>=4&&x<70) y=3*x*x+5;
    else y=x-sqrt(4*x-1);
    cout<<"y="<<setiosflags(ios::fixed)<<setprecision(2)<<y<<endl;
    return 0;
}