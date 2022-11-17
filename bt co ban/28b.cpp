#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z;
    cin>>x>>y>>z;
    if((x*x+y*Y>z*z)&&(y*y+z*z>x*x)&&(z*z+x*x>y*y)) cout<<1;
    else
        if ((x*x + y*y ==z*z) || (y*y + z*z == x*x) || (z*z + x*x == y*y)) coout << 2;
    else
        if ((x*x+y*y<z*z)||(y*y + z*z < x*x)||(z*z+x*x<y*y)) cout << 3;

}
