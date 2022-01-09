/*思路：
打一张表，上面有所有的可见字符，每个字符后面记录该字符出现次数
输出时，从ASCII码较小的字符开始，如果当前字符出现频率大于0，就按要求输出，否则跳过
例如“abaaba”
从32开始，一直到96这些字符都是没有出现，不输出，到了第97个‘a’，之前统计的有4个，按要求输出，然后b同理。
b结束后，从第99号'c'往后都没有了，都跳过，到最后一个结束*/
//貌似样例只过了两个，大家有好的想法可以跟我讲
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100]={0};
    cin>>s;
    char s2[100]={0};
    int freq[128]={0};
    /*int j=0;
    for(int i=32;i<=126;i++)
    {
        s2[j]=i;
        j++;
    }*/
    for(int i=0;s[i]!=0;i++)
    {
        for(int j=32;j<=126;j++)
        {
            if(s[i]==j)
            {
                freq[j]++;
                break;
            }
        }
    }
    for(int i=32;i<=126;i++)
    {
        if(freq[i]>0)
        {
            cout<<char(i)<<" "<<freq[i]<<endl;
        }
    }
    return 0;
}