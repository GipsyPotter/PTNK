#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,a1,a2,a3,s1,s2,s3;
    cin>>a;
    s1=a*a;
    s2=s1*s1;
    s3=s2*s2;
    a1=s1;
    a2=s2*a;
    a3=s3*s2*a2;
    cout<<setprecision(2)<<fixed;
    cout<<a1<<endl<<a2<<endl<<a3;
}