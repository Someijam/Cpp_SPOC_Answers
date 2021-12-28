#include <iostream>
using namespace std;
void longest(char a[],char b[])
{
	char c[100][100]={0};int l[100]={0};
	 int j=0;int m=0,n=0;
	 for(int i=0;a[i]!=0;i++)
	 {
		if(a[i]==' '||a[i+1]==0)
		{
			if(a[i+1]==0)c[m][n]=a[i];
			l[m]=j;
			m++;
			n=0;
			j=0;
			continue;
		}
	    c[m][n]=a[i];
		n++;j++;
	 }
	 l[m-1]++;
	 int max=0;
	 for(int i=0;l[i]>0;i++)
         if(l[i]>max)max=l[i];
	 for(int i=0;l[i]>0;i++)
		 if(l[i]==max) 
		 {
			int m;
            for(m=0;c[i][m]!=0;m++)
            {
                b[m]=c[i][m];
            }
			b[m]=0;
            break;
        }
	return;
}
int main()
{
     char c1[1000];
     char c2[100];
     cin.getline(c1,1000);
     longest(c1,c2);
     cout<<c2;
	 //system("pause");
     return 0;
}