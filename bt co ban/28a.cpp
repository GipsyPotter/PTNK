#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z;
    cin >> x>>y>>z;
    if ((x+y>z)&&(y+z>x)&&(z+x>y)) cout << 1;
    else cout << 0;
}
