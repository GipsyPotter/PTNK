#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double Solve(int n){
    double s=1, a=0, b=0;
    int i =2, m = 2;
    while(i<=n){
        if (i%2==0) s = s*(1+1.0/sqrt(i));
        else s = s*(1-1.0/sqrt(i));
        i++;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    cout<<setprecision(2)<<fixed<<Solve(n);
}
