#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main(){
    float d;
    cin>>d;
    float r=d/(3.14*2);
    cout<<setprecision(2)<<fixed;
    cout<<3.14*r*r;
    return 0;
}