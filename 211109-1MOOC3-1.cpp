#include <iostream>
using namespace std;
int main()
{
    double w,m;
    cin>>w;
    if(w<=5)m=10;
    else if(w-int(w)==0&&int(w)%2==1)m=10+5*(w-5)/2;
    else m=10+5*(int(w-5+2)/2);
    cout<<m<<endl;
    return 0;
}