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
    float ma,mb,mc;
    ma=sqrt((2*b*b+2*c*c-a*a)/4);
    mb=sqrt((2*a*a+2*c*c-b*b)/4);
    mc=sqrt((2*b*b+2*a*a-c*c)/4);
    cout<<ma<<endl;
    cout<<mb<<endl;
    cout<<mc<<endl;
    return 0;
}