#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double degToRad(double degree){return degree*3.14/180;}
int main(){
    double x,y,z;
    cin>>x>>y>>z;
    double a=( 3 + exp( y-1 ) )/( 1 + x*x * abs( y - tan(z) ) );
    double b= 1 - abs(y-x) + (y-x)*(y-x)/2 + (y-x)*(y-x)*(y-x)/3;
    cout<<setprecision(2)<<fixed;
    cout<<a<<" "<<b;
}