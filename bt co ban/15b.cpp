#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,a1,a2,s1,s2,s3;
    cin>>a;
    s1=a*a;
    a1=s1*s1;
    s2=a1*a1;
    s3=s2*s2;
    a2=a1*s3;
    cout<<setprecision(2)<<fixed;
    cout<<a1<<endl<<a2;
}