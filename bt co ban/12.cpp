#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float s,x,y;
    cin >> x>> y;
    s = 6 + y*(10-4*y) + x*(2*x-3+y*(15-7*x + y*(3*x-2)));
    cout << setprecision(2) << fixed;
    cout << s << endl;
}
