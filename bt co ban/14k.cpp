#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,s1,s2,s3,s4,s5,s6;
    cin>>a;
    s1=a*a;
    s2=s1*s1;
    s3=s2*s2;
    s4=s3*s3;
    s5=s4*s4;
    s6=s5*s5;
    cout<<setprecision(2)<<fixed;
    cout<<s6;
}