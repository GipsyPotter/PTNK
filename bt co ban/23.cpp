#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

    float x,y,a,b;
    cin >> x >> y;
    a = (x+y)/2;
    b = x*y;
    if (x>y)
    {
        x = b;
        y = a;
    }
    else
    {
        x = a;
    }
    cout << setprecision(2) << fixed;
    cout << x << " " << y;
}
