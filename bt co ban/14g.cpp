#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    float a,s1,s2,s3,s4;
    cin>>a;
    s1=a*a*a;
    s2=s1*s1;
    s3=s2*s2;
    s4=s3*a;
    cout<<setprecision(2)<<fixed;
    cout<<s4;
}