#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float s1, s2, x;
    cin >> x;
    s1 =  1+x*(-2+x*(3-4*x));
    s2 = s1 + 4*x;
    cout << setprecision(2) << fixed;
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}
