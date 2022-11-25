#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long temp, n;
    int count = 0;
    cin>>n;
    while(n <= 0);
    temp = n;
    if(n == 0) count = 1;
    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    cout<<count;
}