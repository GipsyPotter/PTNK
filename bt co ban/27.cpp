#include <iostream>
#include <iomanip>
#icnlude <cmath>
using namespace std;
int main()
{
    float x,y;
    cin >> x,y;
    if ((x<0)&&(y<0))
    {
        x = abs(x);
        y = abs(y);
    }
    else
        if (((x<0)&&(y>0))||((y<0)&&(x>0)))
    {
        x = x + 0.5;
        y = y + 0.5;
    }
    else
        if (((x >= 0)&&(y>0))&&(((x <= 1)||(x >= 2))&&((y <= 1)||(y >= 2))))
    {
        x = x*10;
        y = y*10;
    }
    cout << setprecision(2) << fixed;
    cout << x << " " << y;
}
