#include <iostream>
using namespace std;

int main()
{
    int a,b, L,H, c = 0;
    cin>>a>>b>>L>>H;
    for(int i=L;i<=H;i++)
    {
        if((i%a==0) ^ (i%b==0)) c++;
    }
    cout<<c;
    return 0;
}