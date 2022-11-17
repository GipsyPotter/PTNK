#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n--;
    int s=n*(n+1)/2;
    cout<<s*(n+1);
    return 0;
}