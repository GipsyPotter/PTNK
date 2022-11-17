#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    float a,b,s,alpha,tan,d,h;
    cin>>a>>b>>alpha;
    alpha=alpha*(3.14/180);
    tan=sin(alpha)/cos(alpha);
    d=(b-a)/2;
    h=d*tan;
    s=(a+b)*h/2;
    cout<<setprecision(2)<<fixed;
    cout<<s<<endl;
    return 0;
}