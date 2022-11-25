#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double s=1;
    for(int i=2; i<=n; i++)
    {
        if(i%2==0) s*=1+(1.0/sqrt(i));
        else s*=1-(1.0/sqrt(i));
    }
    cout<<setprecision(2)<<fixed<<s;
    return 0;
}