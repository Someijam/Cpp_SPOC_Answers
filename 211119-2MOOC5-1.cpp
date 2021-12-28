#include<iostream>
using namespace std;
int main ()
{
    char x[80];
    cin.getline(x,80);
    int i,j=0;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]<='z'&&x[i]>='a')
        {
            x[i]=x[i]-32;
            j++;
        }
    }
    cout<<x<<endl;
    cout<<j<<endl;
    return 0;
}