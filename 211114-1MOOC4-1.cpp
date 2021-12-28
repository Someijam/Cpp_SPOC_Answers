#include <iostream>
using namespace std;
int main()
{
    int i,n;
    double s;
    cin>>n;
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+double(i+1)/i;
    }
    cout<<s<<endl;
    return 0;
}