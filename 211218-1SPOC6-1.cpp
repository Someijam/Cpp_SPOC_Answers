#include <iostream>
#include <cstring>
using namespace std;
//void ISBN(char [],char []);
void ISBN(char a[],char b[])
{
	for(int k=0;k<=13;k++)a[k]=0;
    int i=0;int j=0;int sum=0;
	for(i=0;i<11;i++)
	{
	   if(b[i]<='9'&&b[i]>='0')
	   {
	       j++;
		   sum=sum+(b[i]-'0')*j;//b[0]!=0
	   }
	   a[i]=b[i];
	}
	a[11]='-';
	if(sum%11==10) a[12]='X';
	else a[12]=('0'+(sum%11));
	a[13]='\0';
    return;
}
int main()
{
    char charISBN11[12], charISBN[14];
    cin>>charISBN11;
    ISBN(charISBN,charISBN11);
    cout<<charISBN<<endl;
    //system("pause");
	return 0;
}