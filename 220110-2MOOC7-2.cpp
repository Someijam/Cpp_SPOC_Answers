#include <iostream>
#include <cstring>
using namespace std;
bool detection(char *number,char *merchant)
{
    //bool flag=true;
    char fore[4]={0};
    for(int i=0;i<3;i++)fore[i]=number[i];
    if(!strcmp(fore,"133")||!strcmp(fore,"149")||!strcmp(fore,"153")||!strcmp(fore,"173")||!strcmp(fore,"177")||!strcmp(fore,"180")||!strcmp(fore,"181")||!strcmp(fore,"189")||!strcmp(fore,"191")||!strcmp(fore,"199"))strcpy(merchant,"中国电信");
    else if(!strcmp(fore,"130")||!strcmp(fore,"131")||!strcmp(fore,"132")||!strcmp(fore,"145")||!strcmp(fore,"155")||!strcmp(fore,"166")||!strcmp(fore,"171")||!strcmp(fore,"175")||!strcmp(fore,"176")||!strcmp(fore,"185")||!strcmp(fore,"186")||!strcmp(fore,"156"))strcpy(merchant,"中国联通");
    else if(!strcmp(fore,"134")||!strcmp(fore,"135")||!strcmp(fore,"136")||!strcmp(fore,"137")||!strcmp(fore,"138")||!strcmp(fore,"139")||!strcmp(fore,"147")||!strcmp(fore,"150")||!strcmp(fore,"151")||!strcmp(fore,"152")||!strcmp(fore,"157")||!strcmp(fore,"158")||!strcmp(fore,"159")||!strcmp(fore,"172")||!strcmp(fore,"178")||!strcmp(fore,"182")||!strcmp(fore,"183")||!strcmp(fore,"184")||!strcmp(fore,"187")||!strcmp(fore,"188")||!strcmp(fore,"198"))strcpy(merchant,"中国移动");
    else 
    {
        strcpy(merchant,"不确定");
        return false;
    }
    return true;
}
int main()
{
    char number[12];
    char merchant[9];
    cin>>number;
    if(detection(number, merchant)) 
        cout<<merchant<<endl;
    else
        cout<<"不确定"<<endl;
    return 0;
}