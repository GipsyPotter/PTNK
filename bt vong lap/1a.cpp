#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    double s=0;
    cin>>n;
    for (int i=1;i<=n; i++){
        s += (double)(i-1)/i;
    }
    cout<<setprecision(2)<<fixed;
    cout<<s;
}
