#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,a1,a2,s1,s2;
    cin>>a;
    s1=a*a;
    a1=s1*a;
    s2=s1*a1;
    a2=s2*s2;
    cout<<setprecision(2)<<fixed;
    cout<<a1<<endl<<a2;
}