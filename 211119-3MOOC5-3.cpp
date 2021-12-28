#include<iostream>
using namespace std;
int main()
{
    double a[3][6];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j<3)cin>>a[i][j];
            if(j==3)a[i][3]=a[i][1]+a[i][2]+a[i][0];
            if(j==4)a[i][4]=a[i][3]/3;
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i][3]<a[j][3])
            {
                for(k=0;k<5;k++)
                {
                    a[i][k]=a[i][k]+a[j][k];
                    a[j][k]=a[i][k]-a[j][k];
                    a[i][k]=a[i][k]-a[j][k];
                }
            }
        }
    }
    a[0][5]=1;
    a[1][5]=2;
    a[2][5]=3;
    for(i=0;i<3;i++)
    {
        for(j=0;j<6;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
	return 0;
 } 