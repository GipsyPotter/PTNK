#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, p;
    float s;
    cin >> a >> b >> c;
    cout << setprecision(2) << fixed;
    p = (a + b + c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << s;
}