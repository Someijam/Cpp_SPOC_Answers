//我也搞不清楚“用指针技术”怎么搞，我就用正常的思路做吧
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[100]={0};
    char s2[50]={0};
    int n;
    cin>>s1;
    cin>>s2;
    cin>>n;
    for(int i=strlen(s1);i>=n;i--)
    {
        s1[i+strlen(s2)]=s1[i];
    }
    int j=0;
    for(int i=n;s2[j]!=0;i++)
    {
        s1[i]=s2[j];
        j++;
    }
    cout<<s1;
    return 0;
}