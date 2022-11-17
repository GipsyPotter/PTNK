#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z,a,b;
    cin >> x >> y >> z;
    a = (2*cos(x-3.14/6))/(1.0/2 + sin(y)*sin(y));
    b = 1 + (z*z)/(3+exp(z*log(2.0/5)));
    cout << setprecision(2) << fixed;
    cout << a << " " << b << endl;
}
