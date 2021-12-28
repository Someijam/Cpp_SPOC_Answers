#include <iostream>
using namespace std;
const double PI=3.14159;
class Sphere
{
    private:

    public:
        double r;
        Sphere(double r1);
        Sphere();
        void show();
        void setR(double r2);
        double getS();
        double getV();
};
Sphere::Sphere()
{
    r=0;
}
Sphere::Sphere(double r1)
{
    r=r1;
}
void Sphere::show()
{
    cout<<"半径为"<<r<<"的球表面积为"<<getS()<<endl;
    cout<<"半径为"<<r<<"的球体积为"<<getV()<<endl;
}
void Sphere::setR(double r2)
{
    r=r2;
}
double Sphere::getS()
{
    return 4*PI*r*r;
}
double Sphere::getV()
{
    return 4.0/3*PI*r*r*r;
}

int main()
{        
        double r1,r2;
        cin>>r1>>r2;
        Sphere  q1(r1),q2;
        q1.show();
        q2.show();
        q2.setR(r2);
        q2.show();
        return 0;
}