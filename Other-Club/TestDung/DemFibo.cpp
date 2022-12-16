#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b, c = 0;
    cin>>a>>b;
    if(a <= 1) c = 2;
    int f1 = 1, f2 = 1, f3 = 0;
    while(f3 <= b)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        if(a <= f3 && f3 <= b) c++;
    }
    cout<<c;
    return 0;
}