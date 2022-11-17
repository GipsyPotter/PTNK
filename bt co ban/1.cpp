#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){
    int n;
    double R;
    cin>>n>>R;
    int angle=90-(180/n);
    double canh= R*2*sin(3.14/n);
    cout<<setprecision(2)<<fixed;
    cout<<canh*n;
    return 0;
}