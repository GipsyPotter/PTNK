#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,A,B,C;
    cin>>a>>b>>c;
    A=(b*b+c*c-a*a)/(2*a*c);
    A=acos(A);
    A=A*(180/3.1415);
    B=(a*a+b*b-c*c)/(2*a*b);
    B=acos(B);
    B=B*(180/3.1415);
    C=180-A-B;
    cout<<setprecision(2)<<fixed;
    cout<<A<<" "<<B<<" "<<C;
}