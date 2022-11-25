#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n, x = 0;
    cin>>n;
    double s=1;
    for(int i=2;i<=n;i++)
    {
        s+=sqrt(i);
        if(s>=n){
            cout<<i;
            return 0;
        }
    }
}