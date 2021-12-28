#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x[10];
    int i;
    double avg=0;
    for(i=0;i<10;i++)
    {
        cin>>x[i];
        avg=avg+x[i];
    }
    avg=avg/10; //avg 现在是平均值
    //------------------------------
    double d[10],dmin;
    int imin;
    for(i=0;i<10;i++)
    {
        d[i]=fabs(x[i]-avg);
    }
    dmin=d[0];
    imin=0;
    int flagmin[10]={0};//1表示最小
    for(i=1;i<10;i++)
    {
       //--------------
        if(d[i]<dmin)
        {
            flagmin[i]=1;
            flagmin[imin]=0;//取消之前的标记
            imin=i;
            dmin=d[i];
        }
       //--------------以上是判断比最近的还要小的数
       if(d[i]==dmin)
       {
           flagmin[i]=1;
       }
       //--------------以上是判断与最近的相等的情况
    }
    for(i=0;i<10;i++)
    {
        if(flagmin[i]==1)cout<<x[i]<<endl;
    }
    return 0;
}