#include<iostream>
using namespace std;
int main()
{
    double x;
    cin>>x;
    if(x>=90)cout<<"A  grade"<<endl;
    else if(x>=80&&x<90)cout<<"B  grade"<<endl;
    else if(x>=70&&x<80)cout<<"C  grade"<<endl;
    else if(x>=60&&x<70)cout<<"D  grade"<<endl;
    else cout<<"Not passed"<<endl;
    return 0;
}