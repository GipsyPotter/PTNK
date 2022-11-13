#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    double s=0;
    cin>>n;
    for (int i=0;i<n;i++) {
        s = sqrt(s + 2);
    }
    cout<<setprecision(2)<<fixed;
    cout<<s;
}