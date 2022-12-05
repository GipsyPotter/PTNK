#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    uint64_t fn=1;
    int k=0;
    for(int i = 2; i<=n; i++){
        fn*=i;
        if(fn%m==0){
            fn/=m;
            k++;
        }
    }
    cout<<k;
}