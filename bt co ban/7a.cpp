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
    float ha,hb,hc;
    ha=2*((sqrt(p*(p-a)*(p-b)*(p-c)))/a);
    hb=2*((sqrt(p*(p-a)*(p-b)*(p-c)))/b);
    hc=2*((sqrt(p*(p-a)*(p-b)*(p-c)))/c);
    cout<<ha<<endl;
    cout<<hb<<endl;
    cout<<hc<<endl;
    return 0;
}