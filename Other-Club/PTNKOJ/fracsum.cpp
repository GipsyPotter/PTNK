#include <iostream>
#include <cmath>
using namespace std;

int64_t UCLN(int64_t a, int64_t b)
{
    if(b==0) return a;
    return UCLN(b,a%b);
}

int main()
{
    int64_t a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    a*=d;c*=b;
    y=b*d;x=a+c;
    int64_t s= UCLN(x,y);
    y/=s;
    x/=s;
    cout<<x<<" "<<y;
    return 0;
}