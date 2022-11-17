#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if ((a>=b)&&(b>=c))
    {
        a=a*2;
        b=b*2;
        c=c*2;
    }
    else
    {
        a=abs(a);
        b=abs(b);
        c=abs(c);
    }
    cout<<setprecision(2)<<fixed;
    cout <<a<<" "<<b<<" "<<c<< endl;
    return 0;
}
