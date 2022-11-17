#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){
    float a,b,c;
    cin>>a>>b;
    c=sqrt(a*a-b*b);
    cout<<setprecision(2)<<fixed;
    cout<<(b*c)/(a+b+c);
    return 0;
}