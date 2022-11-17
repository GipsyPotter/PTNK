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
    float la,lb,lc;
    la=sqrt((4*b*c*p*(p-a))/((b+c)*(b+c)));
    lb=sqrt((4*a*c*p*(p-b))/((a+c)*(a+c)));
    lc=sqrt((4*b*a*p*(p-c))/((b+a)*(b+a)));
    cout<<la<<endl;
    cout<<lb<<endl;
    cout<<lc<<endl;
    return 0;
}