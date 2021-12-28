#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i;
    int len[6];
    char name[6][45];
    char t[45];
    for(i=0;i<6;i++)
    {
        cin>>name[i];
        len[i]=strlen(name[i]);
        //cout<<len[i]<<endl;
    }
    int minlen,mini;
    int j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(len[i]<len[j])
            {
                len[i]=len[i]+len[j];
                len[j]=len[i]-len[j];
                len[i]=len[i]-len[j]; 
                strcpy(t,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],t);
                 //exchange
            }

        }
    }
    for(i=0;i<6;i++)cout<<name[i]<<endl;
    return 0;
}