#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,p;
    cout<<setprecision(2)<<fixed;
    cin>>a>>b>>c;
    p=(a+b+c)/2;
    float r,R;
    r=sqrt((p-a)*(p-b)*(p-c)/p);
    R=a*b*c/(4*sqrt(p*(p-a)*(p-b)*(p-c)));
    cout<<r<<endl;
    cout<<R<<endl;
    return 0;
}