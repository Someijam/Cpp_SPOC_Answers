#include<iostream>
#include<cmath>
using namespace std;
int main()
{   
    int i,x,x1,y,s;
    cin>>x;
    x1=x;
    s=0;
    i=0;
    while(x1>0)
    {
        y=x1%10;
        if(y>=5)
        {
            cout<<"Input error"<<endl;
            break;
        }
        x1=x1/10;
        s=s+y*pow(5,i);
        i++;
    }
    if(y<5)cout<<s<<endl;
    return 0;
}