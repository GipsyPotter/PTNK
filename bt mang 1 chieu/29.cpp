#include <iostream>
#include <cmath>
using namespace std;

bool SCP(int n)
{
    int a = sqrt(n);
    if(a*a == n) return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    arr[n]=2;
    int maxl=0, len=0, max_s=0,max_e=0,s=0,e=0;
    for(int i=0;i<=n;i++)
    {
        if(SCP(arr[i]))
        {
            if(len==0) s=i;
            len++;
            e=i;
        }
        else
        {
            if(maxl<len)
            {
                maxl=len;
                max_e=e;
                max_s=s;
            }
            len=0;
        }
    }
    for(int i=max_s;i<=max_e;i++) cout<<arr[i]<<" ";
    return 0;
}