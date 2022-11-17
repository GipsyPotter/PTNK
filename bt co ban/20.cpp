#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x,y,z;
    cin>>x>>y;
    if (x>y) z=x-y;
    else z=y-x-1;
    cout<<setprecision(2)<<fixed;
    cout <<z<< endl;
    return 0;
}
