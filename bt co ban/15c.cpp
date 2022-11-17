#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,a1,a2,s1,s2;
    cin>>a;
    s1=a*a;
    s2=s1*a;
    a1=s1*s2;
    a2=a1*a1*s2;
    cout<<setprecision(2)<<fixed;
    cout<<a1<<endl<<a2;
}