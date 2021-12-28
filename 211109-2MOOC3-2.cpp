#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x%3==0&&x%7!=0)cout<<"是3的倍数但不是7的倍数"<<endl;
    if(x%3!=0&&x%7==0)cout<<"不是3的倍数但是7的倍数"<<endl;
    if(x%3==0&&x%7==0)cout<<"既是3的倍数也是7的倍数"<<endl;
    if(x%3!=0&&x%7!=0)cout<<"既不是3的倍数也不是7的倍数"<<endl;
    return 0;
}