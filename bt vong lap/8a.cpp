#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    uint64_t count = 0, temp, n;
    cin>>n;
    temp = n;
    if(n == 0) count = 1;
    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    cout<<count;
}