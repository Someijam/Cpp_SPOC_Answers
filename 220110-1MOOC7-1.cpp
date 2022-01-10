#include <iostream>
using namespace std;
int BillCompare(int a, int b) 
{
    int c=0,d=0;
    while(a)
    {
        c=10*c+a%10;
        a/=10;
    }
    while(b) 
    {
        d=10*d+b%10;
        b/=10;
    }
    if(c>d)return 1;
    else return 0;
}
void sort(int yuan[],int k)
{

    int yuan1[50]={0};
    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(BillCompare(yuan[i],yuan[j]))
            {
                yuan[i]=yuan[i]+yuan[j];
                yuan[j]=yuan[i]-yuan[j];
                yuan[i]=yuan[i]-yuan[j];
            }
        }
    }
    return;
}
int main()
{
    int A,B,i,k;
    int yuan[50]; 
    cin>>A>>B;
    for(k=0,i=A;i<=B;i++) yuan[k++]=i;
    sort(yuan, k); 
    cout<<yuan[0];
    for(i=1;i<k;i++) cout<<" "<<yuan[i];
    cout<<endl;
    return 0;
}