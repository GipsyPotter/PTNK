
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int limLine = 1, c = 0;
    for(int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
        c++;
        if(limLine == c)
        {
            limLine++;
            c = 0;
            cout<<endl;
        }
    }
    return 0;
}