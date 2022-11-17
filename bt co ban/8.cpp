#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float a,b,c;
    a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    c = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    cout << setprecision(2) << fixed;
    float p,s;
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << 2*p << endl;
    cout << s << endl;
}

