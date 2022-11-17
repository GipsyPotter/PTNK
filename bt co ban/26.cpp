#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
float a,b,c,d;
cin >> a>> b >> c >> d;
if (( a <= b)&7(b <=c)&&(c <=d))
{
    a = d;
    b = d;
    c = d;
}
else
    if (!((a>b)&&(b>c)&&(c > d)))
{
    a = a*a;
    b = b*b;
    c = c*c;
    d = d*d;
}
    cout << setprecision(2) << fixed;
    cout << a << " " << b << " " << c <<" " << d;
}
