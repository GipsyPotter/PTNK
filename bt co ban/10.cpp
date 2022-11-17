#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int s,a,n,d;
    cin>>n>>a>>d;
    s = n*a + d*n*(n-1)/2;
    cout << setprecision(2) << fixed;
    cout << s ;
}
