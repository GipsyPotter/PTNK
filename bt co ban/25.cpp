#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

    float a,b,c;
    cin >> a >> b >> c;
    if ((a+b+b<1)&&(a!=b)&&(b!=c)&&(c != a))
    {
        if ((c<b)&&(c<a)) c = (a+b+c)/3;
        if ((a<b)&&(a<c)) a = (a+b+c)/3;
        if ((b<c)&&(b<a)) b = (a+b+c)/3;
    }
    else
    {
        if (a >b) b = (a+c)/2;
        else a = (b+c)/2;
    }
    cout << setprecision(2) << fixed;
    cout << a << " " << b << " "<< c;
}
