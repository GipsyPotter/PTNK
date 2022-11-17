#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z,min,max;
    cin >> x>> y >> z;
    max = x;
    if (max < y) max = y;
    if (max < z) max = z;
    min = x;
    if (min > y) min = y;
    if (min > z) min = z;
    cout << setprecision(2) << fixed;
    cout << min << endl;
    cout << max << endl;
}

