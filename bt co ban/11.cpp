#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float s,x;
    cin >> x;
    s = x*(x*(x*(2*x-3)+4)-5)+6;
    cout << setprecision(2) << fixed;
    cout << s << endl;
    return 0;
}
