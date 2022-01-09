//同6-1，我也只会用正常点的思维
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    char Hex[100]={0};//十六进制为Hexadecimal，简写为Hex。
    int Dec=0;//十进制为Decimal，简写为Dec。
    cin>>Hex;
    for(int i=strlen(Hex)-1;i>=0;i--)
    {
        switch (Hex[i])
        {
        case 'A':Dec+=10*pow(16,strlen(Hex)-i-1);
            break;
        case 'B':Dec+=11*pow(16,strlen(Hex)-i-1);
            break;
        case 'C':Dec+=12*pow(16,strlen(Hex)-i-1);
            break;
        case 'D':Dec+=13*pow(16,strlen(Hex)-i-1);
            break;
        case 'E':Dec+=14*pow(16,strlen(Hex)-i-1);
            break;
        case 'F':Dec+=15*pow(16,strlen(Hex)-i-1);
            break;
        case 'a':Dec+=10*pow(16,strlen(Hex)-i-1);
            break;
        case 'b':Dec+=11*pow(16,strlen(Hex)-i-1);
            break;
        case 'c':Dec+=12*pow(16,strlen(Hex)-i-1);
            break;
        case 'd':Dec+=13*pow(16,strlen(Hex)-i-1);
            break;
        case 'e':Dec+=14*pow(16,strlen(Hex)-i-1);
            break;
        case 'f':Dec+=15*pow(16,strlen(Hex)-i-1);
            break;
        default:Dec+=(Hex[i]-'0')*pow(16,strlen(Hex)-i-1);
            break;
        }
    }
    cout<<Dec;
    return 0;
}