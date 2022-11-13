#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double s=0;
    int i=1,n;
    cin>>n;
    while (i<=n){
        if (i%2==0) s-=(1.0/i);
        else s+=1.0/i;
        i+=1;
    }
    cout<<setprecision(2)<<fixed;
    cout<<s;
}