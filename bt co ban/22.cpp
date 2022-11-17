#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z;
    cin >> x >> y >> z;
    cout << setprecision(2) << fixed;
    if ((x>3) && ( x < 5)) cout << x;
    if ((y > 3) && (y < 5)) cout << y;
    if ((z > 3) && (z<5)) cout << z;
}
