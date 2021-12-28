#include <iostream>
using namespace std;
void InsSort(int data[],int n,int num)
{
    for(int i=0;i<=10;i++)
    {
        if(num<data[i])
        {
            for(int j=10;j>i;j--)data[j]=data[j-1];
            data[i]=num;
            return;
        }
    }
    data[10]=num;
    return;
}
int main()
{
    int data[11]={12,34,56,78,90,167,258,389,945,1890};
    int num,i;
    cin>>num;
    InsSort(data,10,num);
      for(i=0;i<11;i++)
        cout<<data[i]<<" ";
    cout<<endl;
    return 0;
}