#include <iostream>
#include <cmath>
using namespace std;

bool SNT(int n)
{
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    arr[n]=1;
    int maxl=0, len=0, max_s=0,max_e=0,s=0,e=0;
    for(int i=0;i<=n;i++)
    {
        if(SNT(arr[i]))
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