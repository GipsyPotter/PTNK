#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,s;
    cin>>a;
    s=a*a*a;
    s=s*s*s;
    cout<<setprecision(2)<<fixed;
    cout<<s;
}