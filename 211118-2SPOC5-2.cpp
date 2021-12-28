#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int m;
    int l[5][5];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>l[i][j];
        }
    }
    cin>>m;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j>=i)cout<<setw(5)<<m*l[i][j];
            if(j<i)cout<<setw(5)<<l[i][j];
            if(j==4)cout<<endl;
        }
    }
    return 0;
}