#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double Solve(int n){
    int i=1;
    int m=1;
    double s=0;
    while(i<=n){
        m=m*i;
        if(i%2==0) s=s-1.0/m;
        else s=s+1.0/m;
        i+=1;
        }
    return s;
    }
int main(){
    int n;
    cin>>n;
    cout<<setprecision(2)<<fixed;
    cout<<Solve(n);
    }
