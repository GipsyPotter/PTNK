#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z,gtnn,s,a,b;
    cin >> x >> y >> z;
    a = x+y+z/2;
    b = x*y*z;
    gtnn = a;
    if (gtnn > b) gtnn = b;
    s = gtnn*gtnn + 1;
    cout << setprecision(2) << fixed;
    cout << s << endl;
}

