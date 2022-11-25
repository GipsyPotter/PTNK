#include <iostream>
#include <iomanip>
using namespace std;

uint64_t f(int n)
{
    if(n==1) return 1;
    uint64_t s=0;
    for(int i=1;i<n;i++) s+=f(i);
    return n*s;
}
int main()
{
    int n;
    cin >> n;
    cout<<f(n);
    return 0;
}