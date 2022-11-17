#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
float x,y,z,gtln,a,b;
cin >> x >> y >> z;
a = x+y+z;
b = x*y*z;
gtln = a;
if (gtln < b) gtln = b;
cout << setprecision(2) << fixed;
cout << gtln << endl;
}

